/*
 Image: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
 */

#import <Foundation/NSObject.h>

@class NSArray, NSNumber, NSString;

@interface AXSSKeyChord : NSObject

{
    NSNumber *_cachedIsFunctionKey;
    NSNumber *_cachedContainsModifier;
    NSArray *_keys;
}

@property (retain, nonatomic) NSArray *keys;
@property (nonatomic, readonly) NSString *displayValue;
@property (nonatomic, readonly) _Bool isFunctionKeyChord;
@property (nonatomic, readonly) _Bool containsModifier;
@property (nonatomic, readonly) _Bool isTextInputChord;
@property (nonatomic, readonly) _Bool isTextInputTabChord;
@property (nonatomic, readonly) _Bool isNull;

+ (_Bool)supportsSecureCoding;
+ (id)keyChordWithKeys:(id)arg1;
+ (id)keyChordWithString:(id)arg1;
+ (id)nullKeyChord;
+ (id)keyFromKeyCode:(unsigned long long)arg1 unicodeCharacter:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithKeys:(id)arg1;
- (_Bool)isEqualToKeyChord:(id)arg1;
- (id)displayValueWithStyle:(long long)arg1;
- (id)displayValueWithStyle:(long long)arg1 isUSKeyboard:(_Bool)arg2;
- (id)_displayValueWithSortedModifiers:(id)arg1 isUSKeyboard:(_Bool)arg2;

@end
