/*
 Image: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
 */

#import <Foundation/NSObject.h>

@class NSNumber;

@interface PBBridgeIDSMessageInstance : NSObject

{
    unsigned short _typeID;
    NSNumber *_sentAbsoluteTime;
    long long _retryCount;
    double _retryInterval;
    CDUnknownBlockType _retryAction;
}

@property (retain, nonatomic) NSNumber *sentAbsoluteTime;
@property (nonatomic) unsigned short typeID;
@property (nonatomic) long long retryCount;
@property (nonatomic) double retryInterval;
@property (copy, nonatomic) CDUnknownBlockType retryAction;

+ (id)newMessageInstanceOfType:(unsigned short)arg1 retryCount:(long long)arg2 retryInterval:(double)arg3 withAction:(CDUnknownBlockType)arg4;

- (id)init;
- (id)description;

@end
