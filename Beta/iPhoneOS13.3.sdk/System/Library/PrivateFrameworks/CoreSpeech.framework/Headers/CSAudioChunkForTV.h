/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface CSAudioChunkForTV : NSObject

{
    float _avgPower;
    float _peakPower;
    NSArray *_packets;
    unsigned long long _timeStamp;
}

@property (retain, nonatomic) NSArray *packets;
@property (nonatomic) float avgPower;
@property (nonatomic) float peakPower;
@property (nonatomic) unsigned long long timeStamp;

- (id)initWithXPCObject:(id)arg1;
- (id)xpcObject;

@end
