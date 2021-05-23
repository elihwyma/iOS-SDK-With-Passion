/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIImageView.h>

@class UIColor;

@interface PXRoundedCornerOverlayView : UIImageView

{
    _Bool _isPerformingChanges;
    _Bool _isPerformingUpdates;
    struct {
        _Bool image;
    } _needsUpdateFlags;
    _Bool _continuousCorners;
    double _cornerRadius;
    unsigned long long _cornersToRound;
    UIColor *_overlayColor;
    double _displayScale;
}

@property (nonatomic, readonly) double cornerRadius;
@property (nonatomic, readonly) unsigned long long cornersToRound;
@property (nonatomic, readonly) _Bool continuousCorners;
@property (nonatomic, readonly) UIColor *overlayColor;
@property (nonatomic, readonly) double displayScale;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)_dynamicUserInterfaceTraitDidChange;
- (_Bool)_needsUpdate;
- (void)setContinuousCorners:(_Bool)arg1;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)_invalidateImage;
- (void)_setNeedsUpdate;
- (void)_updateImageIfNeeded;
- (void)setDisplayScale:(double)arg1;
- (id)mutableChangeObject;
- (void)_updateIfNeeded;
- (void)setCornersToRound:(unsigned long long)arg1;
- (void)setOverlayColor:(id)arg1;

@end
