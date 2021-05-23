/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface TIMathSymbolPunctuationController : NSObject

{
    unsigned long long _state;
    long long _location;
    unsigned short _replacementCharacter;
    _Bool _replaceAfterNumerals;
    _Bool _enabled;
    _Bool _converted;
    NSString *_decimalSeparator;
}

@property (copy, nonatomic) NSString *decimalSeparator;
@property (nonatomic) _Bool replaceAfterNumerals;
@property (nonatomic) _Bool enabled;
@property (nonatomic, readonly) _Bool converted;

- (id)init;
- (void)reset;
- (id)mathSymbolPunctuationedStringForInputString:(id)arg1;

@end
