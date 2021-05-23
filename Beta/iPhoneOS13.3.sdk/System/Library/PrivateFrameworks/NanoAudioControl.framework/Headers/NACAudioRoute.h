/*
 Image: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface NACAudioRoute : NSObject

{
    _Bool _supportsVolumeControl;
    _Bool _picked;
    NSString *_uniqueIdentifier;
    NSString *_routeName;
    long long _routeType;
}

@property (nonatomic, readonly) NSString *uniqueIdentifier;
@property (nonatomic, readonly) NSString *routeName;
@property (nonatomic, readonly) long long routeType;
@property (nonatomic, readonly) _Bool supportsVolumeControl;
@property (nonatomic, readonly, getter=isPicked) _Bool picked;

+ (id)audioRouteWithMPAVRoute:(id)arg1;
+ (id)buffersFromAudioRoutes:(id)arg1;
+ (id)audioRoutesFromBuffers:(id)arg1;
+ (long long)_routeTypeFromMPAVRoute:(id)arg1;
+ (long long)_routeTypeFromRouteBufferType:(int)arg1;
+ (id)audioRouteFromBuffer:(id)arg1;
+ (int)_routeBufferTypeFromRouteType:(long long)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)buffer;
- (void)setSupportsVolumeControl:(_Bool)arg1;
- (_Bool)isEqualToAudioRoute:(id)arg1;
- (id)initWithMPAVRoute:(id)arg1;

@end
