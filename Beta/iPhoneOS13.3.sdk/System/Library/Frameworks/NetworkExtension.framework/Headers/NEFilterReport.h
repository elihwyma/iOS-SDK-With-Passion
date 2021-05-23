/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NEFilterFlow;

@interface NEFilterReport : NSObject

{
    NEFilterFlow *_flow;
    long long _action;
    long long _event;
    unsigned long long _bytesInboundCount;
    unsigned long long _bytesOutboundCount;
}

@property (copy) NEFilterFlow *flow;
@property long long action;
@property unsigned long long bytesInboundCount;
@property unsigned long long bytesOutboundCount;
@property (readonly) long long event;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFlow:(id)arg1 action:(long long)arg2 event:(long long)arg3;

@end
