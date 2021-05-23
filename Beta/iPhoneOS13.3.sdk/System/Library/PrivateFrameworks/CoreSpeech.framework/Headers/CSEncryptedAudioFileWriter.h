/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class NSMutableData, NSString, NSURL;

@interface CSEncryptedAudioFileWriter : NSObject

{
    NSURL *_fileUrl;
    NSMutableData *_writeBuffer;
    unsigned long long _sampleByteDepth;
}

@property (retain, nonatomic) NSURL *fileUrl;
@property (retain, nonatomic) NSMutableData *writeBuffer;
@property (nonatomic) unsigned long long sampleByteDepth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)endAudio;
- (_Bool)addSamples:(const void *)arg1 numSamples:(unsigned long long)arg2;
- (id)initWithFileUrl:(id)arg1 sampleByteDepth:(unsigned long long)arg2;

@end
