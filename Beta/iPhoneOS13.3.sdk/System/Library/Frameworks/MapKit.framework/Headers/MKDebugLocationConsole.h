/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <UIKit/UILabel.h>

@class MKMapView, NSDateFormatter, NSString, NSTimer, UIColor;

@interface MKDebugLocationConsole : UILabel

{
    MKMapView *_parentMapView;
    NSTimer *_updateTimer;
    unsigned long long _pageIndex;
    NSString *_customText;
    UIColor *_customTextColor;
    _Bool _customTextEnabled;
    NSDateFormatter *_timeStampFormatter;
}

@property (nonatomic) unsigned long long pageIndex;
@property (nonatomic) _Bool customTextEnabled;

- (void)setText:(id)arg1;
- (void)update;
- (void)updateFrameWithEdgeInsets:(struct UIEdgeInsets)arg1;
- (id)initWithMapView:(id)arg1;
- (struct CGRect)_debugViewFrameWithMapView:(id)arg1;
- (void)_consoleTapped:(id)arg1;
- (void)_updateGPSInfo;
- (void)_updateVehicleInfo;
- (void)_updateCustomText;
- (void)_showNextPage;
- (id)timeStampFormatter;
- (void)updateCustomText:(id)arg1 textColor:(id)arg2;

@end
