/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/FigCaptureRecordingSettings.h>

@class NSArray, NSDictionary;

@interface FigCaptureAudioFileRecordingSettings : FigCaptureRecordingSettings

{
    NSDictionary *_audioSettings;
    NSArray *_metadata;
}

@property (copy, nonatomic) NSDictionary *audioSettings;
@property (copy, nonatomic) NSArray *metadata;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
