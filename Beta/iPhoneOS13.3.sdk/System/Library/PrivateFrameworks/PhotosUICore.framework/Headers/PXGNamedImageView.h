/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIImageView.h>

@class NSString, PXGNamedImageViewConfiguration;

@interface PXGNamedImageView : UIImageView

{
    PXGNamedImageViewConfiguration *_userData;
    struct CGRect _clippingRect;
}

@property (copy, nonatomic) PXGNamedImageViewConfiguration *userData;
@property (nonatomic) struct CGRect clippingRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool isAccessible;
@property (nonatomic, readonly) _Bool isContainedInAsset;
@property (copy, nonatomic, readonly) NSString *accessibilityLabel;

- (void)prepareForReuse;
- (void)becomeReusable;

@end
