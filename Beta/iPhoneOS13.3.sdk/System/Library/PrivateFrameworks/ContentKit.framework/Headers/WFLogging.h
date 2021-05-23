/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSObject.h>

@class NSMutableSet;

@interface WFLogging : NSObject

{
    NSMutableSet *_backends;
}

+ (id)sharedInstance;
+ (void)logEvent:(id)arg1;
+ (void)logEvent:(id)arg1 withObjects:(id)arg2;
+ (void)logEvent:(id)arg1 withObject:(id)arg2;

- (id)init;
- (void)registerBackend:(id)arg1;
- (void)logEvent:(id)arg1 withProperties:(id)arg2;
- (void)registerAllContentKitBackends;

@end
