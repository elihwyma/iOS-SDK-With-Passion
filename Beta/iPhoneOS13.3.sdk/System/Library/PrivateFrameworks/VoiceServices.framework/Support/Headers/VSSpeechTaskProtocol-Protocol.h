/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
 */

#import <voiced_tts/Swift-Protocol.h>

@protocol VSSpeechTaskProtocol <Swift>

- (unsigned short)delegate;
- (unsigned short)cancel;
- (unsigned short)resume;
- (unsigned short)start;
- (unsigned short)suspend;
- (unsigned short)md5hash;

@end
