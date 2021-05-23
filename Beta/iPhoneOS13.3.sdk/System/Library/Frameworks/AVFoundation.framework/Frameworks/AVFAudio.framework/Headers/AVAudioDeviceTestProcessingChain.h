/*
 Image: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
 */

#import <Foundation/NSObject.h>

@class NSURL;

@interface AVAudioDeviceTestProcessingChain : NSObject

{
    NSURL *_graphURL;
    NSURL *_processingStripURL;
}

@property (retain, nonatomic) NSURL *graphURL;
@property (retain, nonatomic) NSURL *processingStripURL;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
