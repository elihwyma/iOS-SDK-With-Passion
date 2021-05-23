/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface AVExportSettingsOutputSettingsAssistantVideoSettingsAdjuster : NSObject

{
    NSString *_outputSettingsPresetIdentifier;
    NSDictionary *_exportSettings;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (long long)averageBitRateForSourceDimensions:(struct CGSize)arg1 andTargetFrameRate:(float)arg2;
- (id)colorSpaceFromSourceFormatDescriptions:(id)arg1 andRendererColorSpace:(id)arg2;
- (id)initWithOutputSettingsPreset:(id)arg1;

@end
