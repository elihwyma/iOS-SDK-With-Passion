/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VSIdentityProviderAlertAction : NSObject

{
    NSString *_title;
    long long _style;
    CDUnknownBlockType _callback;
}

@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long style;
@property (copy, nonatomic) CDUnknownBlockType callback;

@end
