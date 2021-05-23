/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

#import <HomeKit/Swift-Protocol.h>

@interface HMCameraAudioCodec : NSObject <Swift>

{
    unsigned long long _audioCodec;
}

@property (nonatomic, readonly) unsigned long long audioCodec;

+ (_Bool)supportsSecureCoding;
+ (_Bool)isValid:(unsigned long long)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAudioCodecType:(unsigned long long)arg1;

@end
