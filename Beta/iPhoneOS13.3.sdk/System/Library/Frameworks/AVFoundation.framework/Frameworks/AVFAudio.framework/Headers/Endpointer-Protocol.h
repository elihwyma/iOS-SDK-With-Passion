/*
 Image: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
 */

#import <AVFAudio/Swift-Protocol.h>

@protocol Endpointer <Swift>

@property int endpointMode;
@property double startWaitTime;
@property double interspeechWaitTime;
@property double endWaitTime;

- (unsigned short)reset;
- (unsigned short)getStatus: /* Error: Ran out of types for this method. */;

@end
