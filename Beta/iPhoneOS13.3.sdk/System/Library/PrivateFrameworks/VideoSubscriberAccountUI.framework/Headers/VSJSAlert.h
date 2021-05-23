/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <ITMLKit/IKJSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface VSJSAlert : IKJSObject

{
    NSString *_title;
    NSString *_message;
    NSArray *_actions;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSArray *actions;

- (id)init;

@end
