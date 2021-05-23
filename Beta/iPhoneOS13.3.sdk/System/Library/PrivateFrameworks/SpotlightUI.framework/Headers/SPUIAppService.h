/*
 Image: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
 */

#import <Foundation/NSObject.h>

@class SPXPCConnection;

@protocol OS_dispatch_queue;

@interface SPUIAppService : NSObject

{
    int _awakeNotifyToken;
    NSObject<OS_dispatch_queue> *_appServiceQueue;
    SPXPCConnection *_backgroundConnection;
    SPXPCConnection *_appConnection;
    _Bool _activated;
}

+ (void)initialize;

- (id)init;
- (void)activate;
- (void)deactivate;
- (void)_cancelAwakeNotifyToken;
- (void)registerAwakeNotifyToken;

@end
