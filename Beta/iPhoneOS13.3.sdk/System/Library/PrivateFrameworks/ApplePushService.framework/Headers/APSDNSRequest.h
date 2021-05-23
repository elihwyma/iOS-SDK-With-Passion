/*
 Image: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface APSDNSRequest : NSObject

{
    NSString *_hostname;
    double _timeout;
    CDUnknownBlockType _responseBlock;
    NSString *_environment;
    long long _flags;
    NSDate *_requestStartTime;
}

@property (copy, nonatomic, readonly) NSString *hostname;
@property (nonatomic, readonly) double timeout;
@property (copy, readonly) CDUnknownBlockType responseBlock;
@property (retain, nonatomic) NSString *environment;
@property (retain, nonatomic) NSDate *requestStartTime;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithHostname:(id)arg1 timeoutInSeconds:(double)arg2 requestFlags:(long long)arg3 responseBlock:(CDUnknownBlockType)arg4;

@end
