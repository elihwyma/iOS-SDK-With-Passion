/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSDictionary, NSValue, UIDragPreviewParameters, UIView, _DUIPreview;

@interface UIDragPreview : NSObject <Swift>

{
    NSValue *_preferredAnchorPoint;
    _Bool _preventAfterScreenUpdatesSnapshot;
    _Bool _avoidAnimation;
    UIView *_view;
    UIDragPreviewParameters *_parameters;
    NSDictionary *__springboardParameters;
}

@property (nonatomic, getter=_preventAfterScreenUpdatesSnapshot, setter=_setPreventAfterScreenUpdatesSnapshot:) _Bool preventAfterScreenUpdatesSnapshot;
@property (nonatomic) _Bool avoidAnimation;
@property (nonatomic) struct CGPoint preferredAnchorPoint;
@property (nonatomic, readonly) _DUIPreview *_duiPreview;
@property (nonatomic) _Bool _springboardPlatterStyle;
@property (copy, nonatomic) NSDictionary *_springboardParameters;
@property (nonatomic, readonly) UIView *view;
@property (copy, nonatomic, readonly) UIDragPreviewParameters *parameters;

+ (struct CGSize)textBoundingSize;
+ (struct CGSize)defaultBoundingSize;
+ (id)previewForURL:(id)arg1 title:(id)arg2;
+ (id)previewForURL:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithView:(id)arg1;
- (id)initWithView:(id)arg1 parameters:(id)arg2;

@end
