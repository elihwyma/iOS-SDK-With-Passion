/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface VSAudioDump : NSObject

{
    NSString *_audioDumpPath;
}

@property (retain, nonatomic) NSString *audioDumpPath;

+ (id)defaultAudioDumpStore;

- (id)initWithStorePath:(id)arg1;
- (void)dumpAudio:(id)arg1;
- (unsigned long long)totalAudioDumpSize;
- (void)deleteAudioDump;
- (void)createDirectoryIfNeeded;
- (void)cleanAudioDump;

@end
