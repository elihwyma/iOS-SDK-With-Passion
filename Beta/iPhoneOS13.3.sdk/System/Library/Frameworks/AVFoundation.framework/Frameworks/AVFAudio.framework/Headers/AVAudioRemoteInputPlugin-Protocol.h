/*
 Image: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
 */

#import <AVFAudio/Swift-Protocol.h>

@class NSArray;

@protocol AVAudioRemoteInputPlugin <Swift>

@property (nonatomic, readonly) NSArray *devices;

- (unsigned short)invalidate;
- (unsigned short)initWithPluginDelegate: /* Error: Ran out of types for this method. */;

@end
