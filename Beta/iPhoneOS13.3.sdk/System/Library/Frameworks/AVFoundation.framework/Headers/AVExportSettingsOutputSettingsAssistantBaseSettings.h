/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface AVExportSettingsOutputSettingsAssistantBaseSettings : NSObject

{
    NSDictionary *_exportSettings;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSDictionary *baseAudioSettings;
@property (nonatomic, readonly) NSDictionary *baseVideoSettings;

- (id)init;
- (void)dealloc;
- (id)initWithOutputSettingsPreset:(id)arg1;

@end
