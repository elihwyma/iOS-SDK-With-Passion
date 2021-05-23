/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class NSData, NSURL;

@interface CSEncryptedAudioFileReader : NSObject

{
    NSURL *_fileUrl;
    NSData *_aesKey;
    NSData *_readBuffer;
    unsigned long long _sampleByteDepth;
}

@property (retain, nonatomic) NSURL *fileUrl;
@property (retain, nonatomic) NSData *aesKey;
@property (retain, nonatomic) NSData *readBuffer;
@property (nonatomic) unsigned long long sampleByteDepth;

- (id)initWithFileUrl:(id)arg1 aesKey:(id)arg2 sampleByteDepth:(unsigned long long)arg3;
- (_Bool)readAudioChunksWithCallback:(CDUnknownBlockType)arg1;

@end
