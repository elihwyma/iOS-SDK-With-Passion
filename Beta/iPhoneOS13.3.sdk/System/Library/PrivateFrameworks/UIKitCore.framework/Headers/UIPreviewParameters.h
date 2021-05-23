/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class UIBezierPath, UIColor;

@interface UIPreviewParameters : NSObject <Swift>

{
    _Bool _appliesShadow;
    UIBezierPath *_visiblePath;
    UIColor *_backgroundColor;
    long long _previewMode;
}

@property (nonatomic, getter=_previewMode, setter=_setPreviewMode:) long long previewMode;
@property (nonatomic) _Bool appliesShadow;
@property (copy, nonatomic) UIBezierPath *visiblePath;
@property (copy, nonatomic) UIColor *backgroundColor;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTextLineRects:(id)arg1;
- (id)_initWithMode:(long long)arg1 visiblePath:(id)arg2 backgroundColor:(id)arg3;

@end
