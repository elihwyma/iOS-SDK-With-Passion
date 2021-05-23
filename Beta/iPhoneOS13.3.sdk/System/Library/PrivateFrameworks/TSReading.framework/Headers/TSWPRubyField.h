/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSWPSmartField.h>

@class NSString;

@interface TSWPRubyField : TSWPSmartField

{
    NSString *_rubyText;
}

@property (copy, nonatomic) NSString *rubyText;
@property (nonatomic, readonly) NSString *baseText;
@property (nonatomic, readonly) int baseTextScript;

- (void)dealloc;
- (id)text;
- (int)elementKind;
- (_Bool)allowsEditing;
- (id)copyWithContext:(id)arg1;
- (unsigned int)attributeArrayKind;
- (int)styleAttributeArrayKind;
- (_Bool)canCopy:(struct _NSRange)arg1;
- (id)initWithContext:(id)arg1 rubyText:(id)arg2;

@end
