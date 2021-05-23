/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

#import <HomeKit/Swift-Protocol.h>

@interface HMCameraClipVideoSegment : NSObject <Swift>

{
    _Bool _initSegment;
    double _duration;
    unsigned long long _byteLength;
    unsigned long long _byteOffset;
}

@property (readonly) double duration;
@property (readonly) unsigned long long byteLength;
@property (readonly) unsigned long long byteOffset;
@property (readonly, getter=isInitSegment) _Bool initSegment;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDuration:(double)arg1 byteLength:(unsigned long long)arg2 byteOffset:(unsigned long long)arg3 isInitSegment:(_Bool)arg4;

@end
