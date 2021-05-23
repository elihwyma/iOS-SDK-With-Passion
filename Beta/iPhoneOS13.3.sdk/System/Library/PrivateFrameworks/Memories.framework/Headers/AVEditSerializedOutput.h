/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface AVEditSerializedOutput : NSObject

+ (void)initialize;
+ (id)sharedSerialOutput;

- (id)serializeComposition:(id)arg1 containingAssetURLs:(id)arg2;
- (id)serializeVideoComposition:(id)arg1;
- (id)serializeAudioMix:(id)arg1;
- (void)exportSerializedToURL:(id)arg1 withComposition:(id)arg2 andVideoComposition:(id)arg3 andAudioMix:(id)arg4;

@end
