/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <CoverSheet/CSCoverSheetViewControllerBase.h>

@class NSArray, NSSet, NSString, UIColor, _UILegibilitySettings;

@protocol UICoordinateSpace;

@interface SBDashBoardViewExternalControllerBase : CSCoverSheetViewControllerBase

{
    _Bool _externalToDashBoard;
}

@property (nonatomic, readonly, getter=isExternalToDashBoard) _Bool externalToDashBoard;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *appearanceIdentifier;
@property (nonatomic, readonly) long long backgroundStyle;
@property (copy, nonatomic, readonly) NSSet *components;
@property (nonatomic, readonly) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, readonly) UIColor *backgroundColor;
@property (copy, nonatomic, readonly) NSString *coverSheetIdentifier;
@property (nonatomic, readonly) long long participantState;
@property (nonatomic, readonly) long long scrollingStrategy;
@property (nonatomic, readonly) long long notificationBehavior;
@property (nonatomic, readonly) unsigned long long restrictedCapabilities;
@property (nonatomic, readonly) long long proximityDetectionMode;
@property (weak, nonatomic, readonly) id <UICoordinateSpace> presentationCoordinateSpace;
@property (copy, nonatomic, readonly) NSArray *presentationRegions;

- (id)_presenter;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)_registerAsExternalProviderIfNeeded;
- (void)_unregisterAsExternalProvider;

@end
