# ara
Dhrystone and Coremark for Ara

# Build & Run

    git clone --recursive https://github.com/pulp-platform/ara.git
    cp -r apps/coremark ara/apps/.
    cp -r apps/dhrystone ara/apps/.
    cd ara

    cd apps
    make
    cd ../hardware
    make apply-patches
    make verilate
    make app=coremark simv
    make app=dhrystone simv

