/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@protocol UIStatusBarServerClient;

@interface UIStatusBarServer : NSObject

{
    id <UIStatusBarServerClient> _statusBar;
    struct __CFRunLoopSource *_source;
}

@property (retain, nonatomic) id <UIStatusBarServerClient> statusBar;

+ (const char *)serviceName;
+ (void)runServer;
+ (unsigned int)_serverPort;
+ (void)postGlowAnimationState:(_Bool)arg1 forStyle:(long long)arg2;
+ (void)postDoubleHeightStatusString:(id)arg1 forStyle:(long long)arg2;
+ (void)addStatusBarItem:(int)arg1;
+ (void)removeStatusBarItem:(int)arg1;
+ (void)addStyleOverrides:(int)arg1;
+ (void)removeStyleOverrides:(int)arg1;
+ (unsigned int)_publisherPort;
+ (void)postStatusBarData:(const CDStruct_0942cde0 *)arg1 withActions:(int)arg2;
+ (void)postStatusBarOverrideData:(CDStruct_f9a79af9 *)arg1;
+ (void)permanentizeStatusBarOverrideData;
+ (id)_cachedTimeStringFromData:(CDStruct_0942cde0 *)arg1;
+ (const CDStruct_0942cde0 *)getStatusBarData;
+ (CDStruct_f9a79af9 *)getStatusBarOverrideData;
+ (int)getStyleOverrides;
+ (double)getGlowAnimationEndTimeForStyle:(long long)arg1;
+ (_Bool)getGlowAnimationStateForStyle:(long long)arg1;
+ (id)getDoubleHeightStatusStringForStyle:(long long)arg1;

- (void)dealloc;
- (void)_receivedStatusBarData:(CDStruct_0942cde0 *)arg1 actions:(int)arg2 animated:(_Bool)arg3;
- (void)_receivedStyleOverrides:(int)arg1;
- (void)_receivedGlowAnimationState:(_Bool)arg1 forStyle:(long long)arg2;
- (void)_receivedDoubleHeightStatus:(const char *)arg1 forStyle:(long long)arg2;
- (id)initWithStatusBar:(id)arg1;

@end
