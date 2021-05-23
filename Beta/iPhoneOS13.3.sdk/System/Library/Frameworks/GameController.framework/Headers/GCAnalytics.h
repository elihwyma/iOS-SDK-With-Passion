/*
 Image: /System/Library/Frameworks/GameController.framework/GameController
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString, NSTimer;

@interface GCAnalytics : NSObject

{
    NSMutableDictionary *_controllersData;
    NSString *_bundleID;
    NSTimer *_eventPollTimer;
}

+ (id)instance;

- (id)init;
- (void)dealloc;
- (id)getBundleID;
- (void)sendInputsPressedEvent:(const CDStruct_6ad99454 *)arg1;
- (void)runInputPollTimer;
- (void)checkMultipleControllers;
- (void)publishController:(id)arg1;
- (void)unpublishController:(id)arg1;
- (void)onSiriMotionEnabled;

@end
