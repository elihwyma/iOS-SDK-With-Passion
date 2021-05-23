/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UILabelContent.h>

@class NSAttributedString;

__attribute__((visibility("hidden")))
@interface _UILabelAttributedStringContent : _UILabelContent

{
    NSAttributedString *_attributedString;
}

- (id)string;
- (long long)length;
- (unsigned long long)hash;
- (_Bool)isEqualToString:(id)arg1;
- (_Bool)isEqualToAttributedString:(id)arg1;
- (id)attributedString;
- (_Bool)isWidthVariant;
- (_Bool)isAttributed;
- (id)contentWithString:(id)arg1;
- (id)attributedStringContent;
- (_Bool)isAttribute:(id)arg1 uniformlyEqualToValue:(id)arg2;
- (id)contentByApplyingAttributeToEntireRange:(id)arg1 value:(id)arg2;
- (id)defaultValueForAttribute:(id)arg1;
- (id)contentByApplyingAttribute:(id)arg1 value:(id)arg2 toRange:(struct _NSRange)arg3;
- (_Bool)isNil;
- (id)initWithAttributedString:(id)arg1 defaultAttributesProvider:(id)arg2;
- (_Bool)_isContentEqualToContent:(id)arg1;

@end
