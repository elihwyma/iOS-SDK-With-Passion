/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVMediaFileType;

__attribute__((visibility("hidden")))
@interface AVMediaFileOutputSettingsValidator : NSObject

{
    AVMediaFileType *_fileType;
}

@property (nonatomic, readonly) AVMediaFileType *fileType;

+ (void)initialize;
+ (id)mediaFileOutputSettingsValidatorForFileType:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)initWithFileType:(id)arg1;
- (_Bool)validateAudioOutputSettings:(id)arg1 reason:(id *)arg2;
- (_Bool)validateVideoOutputSettings:(id)arg1 reason:(id *)arg2;

@end
