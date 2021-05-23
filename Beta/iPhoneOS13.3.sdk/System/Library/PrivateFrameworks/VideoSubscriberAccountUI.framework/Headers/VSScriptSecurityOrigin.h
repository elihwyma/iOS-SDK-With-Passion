/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VSScriptSecurityOrigin : NSObject

{
    NSString *_scheme;
    NSString *_host;
    long long _port;
}

@property (copy, nonatomic) NSString *scheme;
@property (copy, nonatomic) NSString *host;
@property (nonatomic) long long port;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;

@end
