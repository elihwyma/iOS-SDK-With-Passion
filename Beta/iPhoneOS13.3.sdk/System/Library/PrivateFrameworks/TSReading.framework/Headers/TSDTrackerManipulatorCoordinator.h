/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSMutableSet;

@protocol TSDTrackerManipulator;

@interface TSDTrackerManipulatorCoordinator : NSObject

{
    NSMutableSet *mRegisteredTMs;
    NSObject<TSDTrackerManipulator> *mControllingTM;
}

@property (nonatomic, readonly) NSObject<TSDTrackerManipulator> *controllingTM;

+ (void)p_removeDynamicSubclass:(id)arg1;
+ (void)p_dynamicallySubclassGRForNotification:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)registerTrackerManipulator:(id)arg1;
- (_Bool)takeControlWithTrackerManipulator:(id)arg1;
- (void)operationDidEnd;
- (void)operationWillEnd;
- (_Bool)hasRegisteredTrackerManipulator:(id)arg1;
- (void)p_notifyControlChange;
- (_Bool)relinquishTrackerManipulatorControl:(id)arg1;
- (void)unregisterTrackerManipulator:(id)arg1;

@end
