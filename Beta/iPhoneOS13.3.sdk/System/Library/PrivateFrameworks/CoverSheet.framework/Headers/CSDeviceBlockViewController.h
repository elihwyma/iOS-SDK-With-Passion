/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <CoverSheet/CSModalViewControllerBase.h>

@class NSString, SBFDeviceBlockTimer;

@protocol SBFBlockStatusProvider;

@interface CSDeviceBlockViewController : CSModalViewControllerBase

{
    id <SBFBlockStatusProvider> _blockStatusProvider;
    SBFDeviceBlockTimer *_blockTimer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)_updateText;
- (id)initWithDeviceBlockStatusProvider:(id)arg1;
- (long long)presentationPriority;
- (void)aggregateAppearance:(id)arg1;
- (void)aggregateBehavior:(id)arg1;
- (void)handleSecondaryActionForView:(id)arg1;

@end
