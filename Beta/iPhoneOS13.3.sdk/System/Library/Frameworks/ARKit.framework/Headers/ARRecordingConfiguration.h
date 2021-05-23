/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <ARKit/ARCustomTechniquesConfiguration.h>

@class ARRecordingTechniquePublic, NSString, NSURL;

@interface ARRecordingConfiguration : ARCustomTechniquesConfiguration

{
    NSURL *_fileURL;
    unsigned long long _state;
    ARRecordingTechniquePublic *_recordingTechnique;
    CDUnknownBlockType _finishBlock;
}

@property unsigned long long state;
@property (retain, nonatomic) ARRecordingTechniquePublic *recordingTechnique;
@property (copy) CDUnknownBlockType finishBlock;
@property (nonatomic, readonly) NSURL *fileURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)isSupported;
+ (_Bool)supportsFrameSemantics:(unsigned long long)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initPrivate;
- (id)videoFormat;
- (void)setVideoFormat:(id)arg1;
- (void)startRecording;
- (long long)worldAlignment;
- (id)parentImageSensorSettings;
- (id)imageSensorSettings;
- (id)secondaryTechniques;
- (id)initWithBaseConfiguration:(id)arg1 recordingTechnique:(id)arg2;
- (void)technique:(id)arg1 didFinishWithResult:(id)arg2;
- (void)abortRecording;
- (id)initWithBaseConfiguration:(id)arg1 fileURL:(id)arg2;
- (void)finishRecordingWithHandler:(CDUnknownBlockType)arg1;
- (void)ensureTechniqueAndCustomSensorCompatibility;

@end
