/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKMediaObject.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface CKFullScreenEffectMediaObject : CKMediaObject

{
    NSURL *_audioFileURL;
}

- (id)fileURL;
- (id)initWithFullScreenEffectAudioFileURL:(id)arg1;

@end
