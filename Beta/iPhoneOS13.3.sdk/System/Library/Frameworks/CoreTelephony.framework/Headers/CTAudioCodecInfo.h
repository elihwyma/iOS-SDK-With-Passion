/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@interface CTAudioCodecInfo : NSObject

{
    unsigned long long _callId;
    long long _codec;
    unsigned long long _amrMode;
    long long _evsBandwidth;
    long long _evsBitrate;
}

@property (nonatomic) unsigned long long callId;
@property (nonatomic) long long codec;
@property (nonatomic) unsigned long long amrMode;
@property (nonatomic) long long evsBandwidth;
@property (nonatomic) long long evsBitrate;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCallId:(unsigned long long)arg1 codec:(long long)arg2 amrMode:(unsigned long long)arg3 evsBandwidth:(long long)arg4 evsBitrate:(long long)arg5;

@end
