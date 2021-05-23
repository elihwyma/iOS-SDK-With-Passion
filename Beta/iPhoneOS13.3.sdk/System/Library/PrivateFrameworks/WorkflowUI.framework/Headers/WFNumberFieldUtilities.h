/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

@interface WFNumberFieldUtilities : NSObject

+ (id)decimalSymbol;
+ (void)negateTextInput:(id)arg1;
+ (_Bool)shouldChangeText:(id)arg1 allowMinus:(_Bool)arg2;
+ (id)stringBySanitizingNumberString:(id)arg1 allowDecimalNumbers:(_Bool)arg2;
+ (unsigned long long)numberOfOccurrencesOfString:(id)arg1 inString:(id)arg2;

@end
