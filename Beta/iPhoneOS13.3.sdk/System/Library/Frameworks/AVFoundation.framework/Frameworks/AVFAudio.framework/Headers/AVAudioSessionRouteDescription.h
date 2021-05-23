/*
 Image: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface AVAudioSessionRouteDescription : NSObject

{
    void *_impl;
}

@property (readonly) NSString *siriRemoteInputIdentifier;
@property (readonly) unsigned long long siriInputSource;
@property (readonly) _Bool supportsSoftwareVolume;
@property (readonly) _Bool supportsDoAP;
@property (readonly) NSArray *inputs;
@property (readonly) NSArray *outputs;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (struct RouteDescriptionImpl *)privateGetImplementation;
- (_Bool)isEqualToRoute:(id)arg1;
- (id)initWithRawDescription:(id)arg1 owningSession:(id)arg2;

@end
