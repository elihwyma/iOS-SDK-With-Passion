/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <ITMLKit/IKJSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VSJSError : IKJSObject

{
    unsigned long long _code;
    NSString *_message;
}

@property (nonatomic) unsigned long long code;
@property (copy, nonatomic) NSString *message;

- (id)init;
- (id)description;
- (id)error;

@end
