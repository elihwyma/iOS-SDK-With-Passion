/*
 Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

#import <AVFoundation/AVAudioPCMBuffer.h>

#import <VoiceMemos/Swift-Protocol.h>

@interface AVAudioPCMBuffer (RCAdditions) <Swift>

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)extractChannels:(id)arg1;

@end
