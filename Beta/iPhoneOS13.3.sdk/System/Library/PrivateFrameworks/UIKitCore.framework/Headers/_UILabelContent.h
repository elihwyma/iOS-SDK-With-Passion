/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@protocol _UILabelContentAttributesProvider;

__attribute__((visibility("hidden")))
@interface _UILabelContent : NSObject

{
    id <_UILabelContentAttributesProvider> _defaultAttributesProvider;
}

+ (id)emptyContentWithDefaultAttributesProvider:(id)arg1;

- (id)string;
- (long long)length;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (_Bool)isEqualToString:(id)arg1;
- (_Bool)isEqualToAttributedString:(id)arg1;
- (id)attributedString;
- (_Bool)isWidthVariant;
- (id)widthVariantContentForView:(id)arg1;
- (id)contentWithAttributedString:(id)arg1;
- (_Bool)isAttributed;
- (id)contentWithString:(id)arg1;
- (id)attributedStringContent;
- (_Bool)isAttribute:(id)arg1 uniformlyEqualToValue:(id)arg2;
- (id)contentByApplyingAttributeToEntireRange:(id)arg1 value:(id)arg2;
- (id)defaultValueForAttribute:(id)arg1;
- (id)contentByApplyingAttribute:(id)arg1 value:(id)arg2 toRange:(struct _NSRange)arg3;
- (_Bool)isNil;
- (id)initWithDefaultAttributesProvider:(id)arg1;
- (id)_defaultAttributesForString:(id)arg1;
- (_Bool)_isContentEqualToContent:(id)arg1;
- (void)_mergeDefaultAttributes:(id)arg1;

@end
