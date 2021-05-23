/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@interface SBLiquidDetectionManager : NSObject

{
    int _wetToken;
    _Bool _finishedInit;
    _Bool _detectionEnabled;
    _Bool _accessoryPortWet;
}

@property (nonatomic, readonly, getter=isAccessoryPortWet) _Bool accessoryPortWet;
@property (nonatomic, readonly, getter=isDetectionEnabled) _Bool detectionEnabled;
@property (nonatomic, readonly, getter=isLiquidDetected) _Bool liquidDetected;

+ (id)sharedInstance;
+ (_Bool)showStatusBarIcon;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)_updateStatusBar;
- (void)_updateWetState;
- (void)_finishInit;
- (_Bool)_showStatusBarIcon;
- (void)_stateDidUpdate;

@end
