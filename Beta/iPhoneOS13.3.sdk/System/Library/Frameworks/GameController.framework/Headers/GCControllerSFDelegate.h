/*
 Image: /System/Library/Frameworks/GameController.framework/GameController
 */

#import <Foundation/NSObject.h>

@class NSString, NSUserActivity;

@interface GCControllerSFDelegate : NSObject

{
    NSUserActivity *_activity;
    CDUnknownBlockType _completionHandler;
}

@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)userActivityWasContinued:(id)arg1;
- (void)startScan;
- (void)fireCompletionHandler;

@end
