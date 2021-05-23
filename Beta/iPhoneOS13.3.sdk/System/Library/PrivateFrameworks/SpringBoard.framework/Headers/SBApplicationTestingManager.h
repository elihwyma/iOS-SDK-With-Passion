/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

@interface SBApplicationTestingManager : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_queue_testEndedHandlers;
    NSMutableDictionary *_idleTimerDisableAssertions;
    NSString *_currentTestName;
    NSString *_scrollTestActiveSubtest;
}

@property (nonatomic, readonly, getter=_idleTimerDisableAssertions) NSMutableDictionary *idleTimerDisableAssertions;
@property (copy, nonatomic) NSString *currentTestName;
@property (copy, nonatomic) NSString *scrollTestActiveSubtest;

+ (id)sharedInstance;

- (id)init;
- (void)markUserLaunchInitiationTime;
- (void)_prepareForTestStartup:(id)arg1;
- (void)_handleTestEnded;
- (void)_installTestEndedHandler:(CDUnknownBlockType)arg1;

@end
