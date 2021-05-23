/*
 Image: /System/Library/PrivateFrameworks/NanoLeash.framework/NanoLeash
 */

#import <Foundation/NSObject.h>

@interface NFMIDSMessageInstance : NSObject

{
    long long _retryCount;
    double _retryInterval;
    CDUnknownBlockType _retryAction;
}

@property (nonatomic) long long retryCount;
@property (nonatomic) double retryInterval;
@property (copy, nonatomic) CDUnknownBlockType retryAction;

+ (id)newMessageInstanceWithAction:(CDUnknownBlockType)arg1 retryCount:(long long)arg2 retryInterval:(double)arg3;

- (id)description;

@end
