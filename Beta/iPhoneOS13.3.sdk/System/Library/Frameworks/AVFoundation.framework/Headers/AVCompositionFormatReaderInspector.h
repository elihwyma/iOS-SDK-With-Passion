/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVFormatReaderInspector.h>

__attribute__((visibility("hidden")))
@interface AVCompositionFormatReaderInspector : AVFormatReaderInspector

- (_Bool)isPlayable;
- (_Bool)isExportable;
- (_Bool)isReadable;
- (_Bool)isComposable;
- (_Bool)isCompatibleWithPhotosTranscodingServiceWithOptions:(id)arg1;
- (_Bool)isCompatibleWithSavedPhotosAlbum;
- (_Bool)isCompatibleWithAirPlayVideo;

@end
