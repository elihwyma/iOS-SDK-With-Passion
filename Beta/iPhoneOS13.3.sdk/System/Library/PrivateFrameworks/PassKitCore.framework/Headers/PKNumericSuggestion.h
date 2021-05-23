/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSDecimalNumber, NSString;

@interface PKNumericSuggestion : NSObject

{
    _Bool _usedMaximumSuggestion;
    NSDecimalNumber *_value;
    NSString *_title;
    NSString *_displayValue;
}

@property (copy, nonatomic, readonly) NSDecimalNumber *value;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *displayValue;
@property (nonatomic) _Bool usedMaximumSuggestion;

+ (id)suggestionWithValue:(id)arg1 currencyCode:(id)arg2;
+ (id)suggestionWithTitle:(id)arg1 value:(id)arg2 currencyCode:(id)arg3;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithValue:(id)arg1 currencyCode:(id)arg2;
- (id)initWithTitle:(id)arg1 value:(id)arg2 currencyCode:(id)arg3;

@end
