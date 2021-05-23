/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface VSIdentityProviderAlert : NSObject

{
    NSString *_title;
    NSString *_message;
    NSArray *_actions;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (retain, nonatomic) NSArray *actions;

@end
