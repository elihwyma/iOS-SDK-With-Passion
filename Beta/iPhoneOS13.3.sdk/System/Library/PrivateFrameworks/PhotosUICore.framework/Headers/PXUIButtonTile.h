/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSArray, NSString, PXButtonSpec, UIButton, UIView;

@protocol PXUIButtonTileDelegate;

@interface PXUIButtonTile : NSObject <Swift>

{
    _Bool _hasScheduledUpdate;
    CDStruct_6d279c03 _needsUpdateFlags;
    id <PXUIButtonTileDelegate> _delegate;
    NSString *_title;
    UIView *__view;
    UIButton *__button;
    PXButtonSpec *__spec;
    NSArray *__layoutConstraints;
}

@property (nonatomic, readonly) UIView *_view;
@property (nonatomic, readonly) UIButton *_button;
@property (retain, nonatomic, setter=_setSpec:) PXButtonSpec *_spec;
@property (copy, nonatomic, setter=_setLayoutConstraints:) NSArray *_layoutConstraints;
@property (weak, nonatomic) id <PXUIButtonTileDelegate> delegate;
@property (copy, nonatomic) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIView *view;

- (id)init;
- (void)prepareForReuse;
- (_Bool)_needsUpdate;
- (void)_setNeedsUpdate;
- (void)_updateIfNeeded;
- (void)_invalidateButton;
- (void)_updateButtonIfNeeded;
- (void)didApplyGeometry:(struct PXTileGeometry)arg1 withUserData:(id)arg2;
- (void)becomeReusable;
- (void)_handleButton:(id)arg1;

@end
