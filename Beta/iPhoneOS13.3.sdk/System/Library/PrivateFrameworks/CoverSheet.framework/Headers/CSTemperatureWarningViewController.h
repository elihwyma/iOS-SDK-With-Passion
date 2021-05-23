/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <CoverSheet/CSModalViewControllerBase.h>

@class NSString;

@protocol CSThermalStatusProviding;

@interface CSTemperatureWarningViewController : CSModalViewControllerBase

{
    id <CSThermalStatusProviding> _thermalStatusProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (long long)presentationPriority;
- (void)aggregateAppearance:(id)arg1;
- (void)aggregateBehavior:(id)arg1;
- (void)handleSecondaryActionForView:(id)arg1;
- (id)initWithThermalStatusProvider:(id)arg1;

@end
