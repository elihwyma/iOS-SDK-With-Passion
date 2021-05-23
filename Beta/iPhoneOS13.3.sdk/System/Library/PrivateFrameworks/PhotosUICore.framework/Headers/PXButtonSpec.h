/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXLabelSpec.h>

@class UIColor;

@interface PXButtonSpec : PXLabelSpec

{
    struct UIColor *_highlightedTextColor;
}

@property (copy, nonatomic) UIColor *highlightedTextColor;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
