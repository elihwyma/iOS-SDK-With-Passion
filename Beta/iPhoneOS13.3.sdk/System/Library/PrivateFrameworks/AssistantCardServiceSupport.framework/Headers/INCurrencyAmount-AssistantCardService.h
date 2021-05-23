/*
 Image: /System/Library/PrivateFrameworks/AssistantCardServiceSupport.framework/AssistantCardServiceSupport
 */

#import <Intents/INCurrencyAmount.h>

@interface INCurrencyAmount (AssistantCardService)

+ (id)_acs_currencySymbolForCode:(id)arg1;
+ (id)_acs_localeForCode:(id)arg1;

- (id)_acs_formattedStringIncludeSymbol:(_Bool)arg1;
- (id)acs_formattedAmountString;
- (id)_acs_currencySymbol;

@end
