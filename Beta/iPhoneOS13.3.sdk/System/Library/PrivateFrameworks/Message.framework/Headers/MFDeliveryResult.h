/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@interface MFDeliveryResult : NSObject

{
    _Bool _isWifi;
    long long _status;
    double _duration;
    unsigned long long _bytesSent;
    long long _attributes;
}

@property (nonatomic) long long status;
@property (nonatomic) double duration;
@property (nonatomic) unsigned long long bytesSent;
@property (nonatomic) _Bool isWifi;
@property (nonatomic) long long attributes;

- (id)description;
- (id)initWithStatus:(long long)arg1;

@end
