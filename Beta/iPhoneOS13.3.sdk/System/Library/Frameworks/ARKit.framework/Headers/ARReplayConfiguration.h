/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <ARKit/ARCustomTechniquesConfiguration.h>

@class NSString, NSURL;

@protocol ARReplayConfigurationDelegate, ARReplaySensorProtocol;

@interface ARReplayConfiguration : ARCustomTechniquesConfiguration

{
    id <ARReplaySensorProtocol> _replaySensor;
    NSURL *_fileURL;
    id <ARReplayConfigurationDelegate> _delegate;
}

@property (nonatomic, readonly) NSURL *fileURL;
@property (weak, nonatomic) id <ARReplayConfigurationDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsFrameSemantics:(unsigned long long)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)pause;
- (void)play;
- (id)initPrivate;
- (long long)worldAlignment;
- (id)parentImageSensorSettings;
- (id)imageSensorSettings;
- (id)secondaryTechniques;
- (id)imageSensorSettingsForSuperWide;
- (id)initWithBaseConfiguration:(id)arg1 replaySensor:(id)arg2 replayingResultDataClasses:(id)arg3;
- (void)replaySensorDidFinishReplayingData;
- (id)initWithBaseConfiguration:(id)arg1 fileURL:(id)arg2 outError:(id *)arg3 manualMode:(_Bool)arg4 synchronousMode:(_Bool)arg5;
- (id)initWithBaseConfiguration:(id)arg1 fileURL:(id)arg2 outError:(id *)arg3;

@end
