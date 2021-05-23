/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UILabelContent.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UILabelStringContent : _UILabelContent

{
    NSString *_string;
    struct {
        unsigned int isWidthVariant:1;
    } _flags;
}

- (id)string;
- (long long)length;
- (unsigned long long)hash;
- (_Bool)isEqualToString:(id)arg1;
- (_Bool)isEqualToAttributedString:(id)arg1;
- (id)attributedString;
- (_Bool)isWidthVariant;
- (_Bool)isAttributed;
- (id)attributedStringContent;
- (id)defaultValueForAttribute:(id)arg1;
- (_Bool)isNil;
- (id)initWithString:(id)arg1 defaultAttributesProvider:(id)arg2;
- (_Bool)_isContentEqualToContent:(id)arg1;

@end
