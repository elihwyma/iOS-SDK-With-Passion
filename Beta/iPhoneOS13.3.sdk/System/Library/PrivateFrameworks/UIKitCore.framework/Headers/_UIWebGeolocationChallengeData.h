/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL, UIWindow;

@protocol WebAllowDenyPolicyListener;

__attribute__((visibility("hidden")))
@interface _UIWebGeolocationChallengeData : NSObject

{
    NSString *_token;
    NSURL *_requestingURL;
    UIWindow *_window;
    id <WebAllowDenyPolicyListener> _listener;
}

@property (retain, nonatomic) NSString *token;
@property (retain, nonatomic) NSURL *requestingURL;
@property (retain, nonatomic) UIWindow *window;
@property (retain, nonatomic) id <WebAllowDenyPolicyListener> listener;

- (void)dealloc;

@end
