/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSUserDefaults;

@protocol OS_dispatch_queue;

@interface WFActionRateLimiter : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSUserDefaults *_userDefaults;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) NSUserDefaults *userDefaults;
@property (retain, nonatomic) NSDictionary *attempts;

+ (id)sharedInstance;
+ (void)performAction:(id)arg1 onQueue:(id)arg2 withBlock:(CDUnknownBlockType)arg3;

- (id)init;
- (id)initWithUserDefaults:(id)arg1;
- (void)modify:(CDUnknownBlockType)arg1;

@end
