/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface TIKeyboardIntermediateText : NSObject

{
    unsigned long long _selectionOffset;
    NSString *_inputString;
    NSString *_displayString;
    NSString *_searchString;
}

@property (nonatomic, readonly) NSString *inputString;
@property (nonatomic, readonly) NSString *displayString;
@property (nonatomic, readonly) struct _NSRange selectedRange;
@property (nonatomic, readonly) NSString *searchString;

+ (_Bool)supportsSecureCoding;
+ (id)intermediateTextWithInputString:(id)arg1 displayString:(id)arg2;
+ (id)intermediateTextWithInputString:(id)arg1 displayString:(id)arg2 selectionLocation:(unsigned long long)arg3;
+ (id)intermediateTextWithInputString:(id)arg1 displayString:(id)arg2 selectionLocation:(unsigned long long)arg3 searchString:(id)arg4;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInputString:(id)arg1 displayString:(id)arg2 selectionLocation:(unsigned long long)arg3 searchString:(id)arg4;

@end
