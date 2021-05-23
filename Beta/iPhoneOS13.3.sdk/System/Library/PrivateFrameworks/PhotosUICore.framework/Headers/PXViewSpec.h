/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class UIColor;

@interface PXViewSpec : NSObject <Swift>

{
    _Bool _hidden;
    struct UIColor *_backgroundColor;
    struct UIColor *_selectionHighlightColor;
    struct UIColor *_borderColor;
    double _borderWidth;
    double _cornerRadius;
    double _displayScale;
    long long _compositingFilterType;
}

@property (copy, nonatomic) UIColor *backgroundColor;
@property (copy, nonatomic) UIColor *selectionHighlightColor;
@property (copy, nonatomic) UIColor *borderColor;
@property (nonatomic) double borderWidth;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double displayScale;
@property (nonatomic) long long compositingFilterType;
@property (nonatomic, getter=isHidden) _Bool hidden;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
