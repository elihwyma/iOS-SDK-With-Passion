/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UILabel.h>

@class NSString, PXCuratedLibraryLabelConfiguration;

@interface PXCuratedLibraryLabel : UILabel

{
    PXCuratedLibraryLabelConfiguration *_userData;
    struct CGRect _clippingRect;
}

@property (copy, nonatomic) PXCuratedLibraryLabelConfiguration *userData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool isAccessible;
@property (nonatomic, readonly) _Bool isContainedInAsset;
@property (copy, nonatomic, readonly) NSString *accessibilityLabel;
@property (nonatomic) struct CGRect clippingRect;

+ (struct CGSize)sizeThatFits:(struct CGSize)arg1 withConfiguration:(id)arg2;

- (void)prepareForReuse;
- (void)becomeReusable;

@end
