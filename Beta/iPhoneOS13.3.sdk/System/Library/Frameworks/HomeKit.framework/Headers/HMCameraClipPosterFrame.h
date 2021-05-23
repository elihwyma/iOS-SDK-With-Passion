/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

#import <HomeKit/Swift-Protocol.h>

@interface HMCameraClipPosterFrame : NSObject <Swift>

{
    double _timeOffset;
    unsigned long long _width;
    unsigned long long _height;
    unsigned long long _byteOffset;
    unsigned long long _sizeInBytes;
}

@property (readonly) unsigned long long byteOffset;
@property (readonly) unsigned long long sizeInBytes;
@property (readonly) double timeOffset;
@property (readonly) unsigned long long width;
@property (readonly) unsigned long long height;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimeOffset:(double)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 byteOffset:(unsigned long long)arg4 sizeInBytes:(unsigned long long)arg5;

@end
