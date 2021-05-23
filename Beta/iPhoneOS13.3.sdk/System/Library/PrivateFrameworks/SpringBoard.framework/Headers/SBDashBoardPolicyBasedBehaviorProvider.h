/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class CSCoverSheetViewController, NSString, SBMainDisplayPolicyAggregator;

@interface SBDashBoardPolicyBasedBehaviorProvider : NSObject

{
    CSCoverSheetViewController *_coverSheetViewController;
    SBMainDisplayPolicyAggregator *_policyAggregator;
    id _notificationToken;
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

- (void)dealloc;
- (unsigned long long)_cameraRestrictions;
- (unsigned long long)_restrictedCapability:(unsigned long long)arg1 forAggregatorCapability:(long long)arg2;
- (id)initWithCoverSheetViewController:(id)arg1 policyAggregator:(id)arg2;

@end
