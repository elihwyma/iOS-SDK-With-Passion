/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

#import <Celestial/Swift-Protocol.h>

@class BWVideoFormat, NSDictionary;

@interface BWInferenceVideoFormat : NSObject <Swift>

{
    BWVideoFormat *_underlyingVideoFormat;
    _Bool _deviceOriented;
    long long _videoContentMode;
    _Bool _includesInvalidContent;
}

@property (nonatomic, readonly) unsigned long long width;
@property (nonatomic, readonly) unsigned long long height;
@property (nonatomic, readonly) unsigned int pixelFormat;
@property (nonatomic, readonly) unsigned long long extendedWidth;
@property (nonatomic, readonly) unsigned long long extendedHeight;
@property (nonatomic, readonly) int colorSpaceProperties;
@property (nonatomic, readonly) _Bool deviceOriented;
@property (nonatomic, readonly) NSDictionary *pixelBufferAttributes;
@property (nonatomic, readonly) BWVideoFormat *underlyingVideoFormat;
@property (nonatomic, readonly) long long videoContentMode;
@property (nonatomic, readonly) _Bool includesInvalidContent;

+ (id)formatByResolvingRequirements:(id)arg1;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUnderlyingFormat:(id)arg1 isDeviceOriented:(_Bool)arg2 videoContentMode:(long long)arg3 includesInvalidContent:(_Bool)arg4;

@end
