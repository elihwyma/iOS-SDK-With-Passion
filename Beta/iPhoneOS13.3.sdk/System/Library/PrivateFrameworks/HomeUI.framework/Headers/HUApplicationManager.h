/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class NSHashTable;

@protocol HUStatusBarVisibilityHandling;

@interface HUApplicationManager : NSObject

{
    _Bool _wasStatusBarVisible;
    id <HUStatusBarVisibilityHandling> _statusBarVisibilityHandler;
    NSHashTable *_statusBarHidingRequesters;
    NSHashTable *_networkActivityIndicatorRequesters;
    NSHashTable *_idleTimerDisabledRequesters;
}

@property (retain, nonatomic) NSHashTable *statusBarHidingRequesters;
@property (retain, nonatomic) NSHashTable *networkActivityIndicatorRequesters;
@property (retain, nonatomic) NSHashTable *idleTimerDisabledRequesters;
@property (nonatomic) _Bool wasStatusBarVisible;
@property (retain, nonatomic) id <HUStatusBarVisibilityHandling> statusBarVisibilityHandler;
@property (nonatomic, readonly, getter=isStatusBarHidden) _Bool statusBarHidden;

+ (id)sharedInstance;

- (id)init;
- (_Bool)isIdleTimerDisabled;
- (_Bool)isNetworkActivityIndicatorVisible;
- (void)setStatusBarHidden:(_Bool)arg1 forRequester:(id)arg2 withAnimationSettings:(id)arg3;
- (void)setStatusBarHidden:(_Bool)arg1 forRequester:(id)arg2;
- (void)setNetworkActivityIndicatorVisible:(_Bool)arg1 forRequester:(id)arg2;
- (void)setIdleTimerDisabled:(_Bool)arg1 forRequester:(id)arg2;

@end
