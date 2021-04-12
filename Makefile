.PHONY: clean All

All:
	@echo "----------Building project:[ jogodaforca - Debug ]----------"
	@cd "jogo" && "$(MAKE)" -f  "jogodaforca.mk"
clean:
	@echo "----------Cleaning project:[ jogodaforca - Debug ]----------"
	@cd "jogo" && "$(MAKE)" -f  "jogodaforca.mk" clean
