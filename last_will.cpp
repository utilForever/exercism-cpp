namespace zhang {
    int bank_number_part(int secret_modifier) {
        int zhang_part{8'541};
        return (zhang_part*secret_modifier) % 10000;
    }
    namespace red {
        int code_fragment() {return 512;}
    }
    namespace blue {
        int code_fragment() {return 677;}
    }
}

namespace khan {
    int bank_number_part(int secret_modifier) {
        int khan_part{4'142};
        return (khan_part*secret_modifier) % 10000;
    }
    namespace red {
        int code_fragment() {return 148;}
    }
    namespace blue {
        int code_fragment() {return 875;}
    }
}

namespace garcia {
    int bank_number_part(int secret_modifier) {
        int garcia_part{4'023};
        return (garcia_part*secret_modifier) % 10000;
    }
    namespace red {
        int code_fragment() {return 118;}
    }
    namespace blue {
        int code_fragment() {return 923;}
    }
}

namespace estate_executor {
    int assemble_account_number(int secret_modifier) {
        const int zhang = zhang::bank_number_part(secret_modifier);
        const int khan = khan::bank_number_part(secret_modifier);
        const int garcia = garcia::bank_number_part(secret_modifier);

        return zhang + khan + garcia;
    }

    int assemble_code() {
        const int red = zhang::red::code_fragment() + khan::red::code_fragment() + garcia::red::code_fragment();
        const int blue = zhang::blue::code_fragment() + khan::blue::code_fragment() + garcia::blue::code_fragment();

        return red * blue;
    }
}
