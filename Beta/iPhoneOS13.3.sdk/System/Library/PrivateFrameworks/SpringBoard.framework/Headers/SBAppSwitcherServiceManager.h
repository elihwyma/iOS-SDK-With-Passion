/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class SBAppSwitcherServiceSet;

@interface SBAppSwitcherServiceManager : NSObject

{
    SBAppSwitcherServiceSet *_services;
}

+ (id)sharedInstance;

- (void)registerService:(id)arg1;
- (void)unregisterService:(id)arg1;
- (id)registeredServicesSnapshot;

@end
