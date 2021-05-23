/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class NSNumber;

@interface HUQuickControlCollectionViewControllerLayoutOptions : NSObject

{
    double _rowSpacing;
    double _interitemSpacingForExtraSmallControlSize;
    double _interitemSpacingForSmallControlSize;
    double _interitemSpacingForRegularControlSize;
    double _interitemSpacingForLargeControlSize;
    double _minimumSectionSpacing;
    double _minimumNavBarToControlsSpacing;
    double _minimumSectionToSensorSectionSpacing;
    double _thermostatSectionSpacingOverride;
    unsigned long long _preferredLayoutStyle;
    unsigned long long _titlePosition;
    NSNumber *_overrideSizeSubclass;
    struct CGSize _viewSize;
}

@property (retain, nonatomic) NSNumber *overrideSizeSubclass;
@property (nonatomic) double rowSpacing;
@property (nonatomic) double interitemSpacingForExtraSmallControlSize;
@property (nonatomic) double interitemSpacingForSmallControlSize;
@property (nonatomic) double interitemSpacingForRegularControlSize;
@property (nonatomic) double interitemSpacingForLargeControlSize;
@property (nonatomic) double minimumSectionSpacing;
@property (nonatomic) double minimumNavBarToControlsSpacing;
@property (nonatomic) double minimumSectionToSensorSectionSpacing;
@property (nonatomic) double thermostatSectionSpacingOverride;
@property (nonatomic) unsigned long long preferredLayoutStyle;
@property (nonatomic) unsigned long long titlePosition;
@property (nonatomic, readonly) struct CGSize viewSize;
@property (nonatomic, readonly) long long viewSizeSubclass;

+ (id)defaultOptions;
+ (id)defaultOptionsForViewSize:(struct CGSize)arg1;

- (id)initWithViewSize:(struct CGSize)arg1;

@end
