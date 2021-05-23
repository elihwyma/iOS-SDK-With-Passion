/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class CSCoverSheetViewController, NSString, SBDashBoardSetupViewController, SBSetupManager;

@interface SBDashBoardSetupController : NSObject

{
    CSCoverSheetViewController *_coverSheetViewController;
    SBSetupManager *_setupManager;
    SBDashBoardSetupViewController *_setupViewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long scrollingStrategy;
@property (nonatomic, readonly) long long notificationBehavior;
@property (nonatomic, readonly) unsigned long long restrictedCapabilities;
@property (nonatomic, readonly) long long proximityDetectionMode;
@property (copy, nonatomic, readonly) NSString *coverSheetIdentifier;
@property (nonatomic, readonly) long long participantState;

- (id)init;
- (void)dealloc;
- (_Bool)handleEvent:(id)arg1;
- (_Bool)wouldHandleButtonEvent:(id)arg1;
- (void)_configureForCurrentSetupMode;
- (void)_setupModeChanged:(id)arg1;
- (void)_clearSetupViewIfNecessaryAnimated:(_Bool)arg1;
- (void)_addOrRemoveSetupViewIfNecessaryAnimated:(_Bool)arg1;
- (id)initWithCoverSheetViewController:(id)arg1 setupManager:(id)arg2;

@end
