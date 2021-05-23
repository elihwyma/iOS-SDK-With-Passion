/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <CoverSheet/CSCoverSheetViewBase.h>

@class CNContact, NSString, _UILegibilitySettings, _UILegibilityView;

@interface CSUserPictureView : CSCoverSheetViewBase

{
    CNContact *_contact;
    _UILegibilityView *_monogramLegibilityView;
    double _legibilityStrength;
    _UILegibilitySettings *_legibilitySettings;
    double _diameter;
}

@property (copy, nonatomic) CNContact *contact;
@property (nonatomic) double diameter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) double strength;

+ (id)_monogrammerForLegibilitySettings:(id)arg1 diameter:(double)arg2;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)presentationRegions;
- (void)_regenerateImage;

@end
