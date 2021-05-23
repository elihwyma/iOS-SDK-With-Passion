/*
 Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

#import <Foundation/NSData.h>

__attribute__((visibility("hidden")))
@interface RCAudioFileData : NSData

{
    struct OpaqueAudioFileID *_audioFile;
    unsigned long long _audioFileSize;
}

+ (id)audioFileDataWithURL:(id)arg1 error:(id *)arg2;

- (void)dealloc;
- (void)enumerateByteRangesUsingBlock:(CDUnknownBlockType)arg1;
- (id)_initWithURL:(id)arg1 error:(id *)arg2;

@end
