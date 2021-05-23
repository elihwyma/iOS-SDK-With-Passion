/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class NSNumberFormatter, NSString, WBSPageZoomPreferenceManager;

@protocol _SFBrowserDocument, _SFSettingsAlertStepperConfiguration;

__attribute__((visibility("hidden")))
@interface _SFPageZoomStepperController : NSObject

{
    WBSPageZoomPreferenceManager *_preferenceManager;
    id <_SFBrowserDocument> _tab;
    NSNumberFormatter *_percentFormatter;
    id <_SFSettingsAlertStepperConfiguration> _stepper;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)resetValue:(id)arg1;
- (void)prepareStepper:(id)arg1;
- (void)incrementValue:(id)arg1;
- (void)decrementValue:(id)arg1;
- (id)initWithDocument:(id)arg1 preferenceManager:(id)arg2;
- (void)_pageZoomChanged:(id)arg1;
- (void)_updateButtonsEnabledWithZoomFactor:(double)arg1;
- (void)_updateButtonsEnabledOnMainQueueWithZoomFactor:(double)arg1;

@end
