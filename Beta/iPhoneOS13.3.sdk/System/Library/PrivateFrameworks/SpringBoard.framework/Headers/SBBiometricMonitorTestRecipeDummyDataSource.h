/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSString;

@interface SBBiometricMonitorTestRecipeDummyDataSource : NSObject

{
    NSMutableSet *_observers;
    long long _state;
    _Bool _poseIsMarginal;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool presenceDetectRunning;
@property (nonatomic, readonly) _Bool matchRunning;
@property (nonatomic, readonly) _Bool poseIsMarginal;

- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)cycleState;

@end
