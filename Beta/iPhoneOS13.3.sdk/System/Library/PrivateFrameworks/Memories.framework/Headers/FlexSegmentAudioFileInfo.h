/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface FlexSegmentAudioFileInfo : NSObject

{
    long long _sampleRate;
    long long _sampleCount;
    long long _bpm;
    long long _bars;
    long long _samplesPerBar;
    NSArray *_customBarMarkers;
}

@property (nonatomic) long long sampleRate;
@property (nonatomic) long long sampleCount;
@property (nonatomic) long long bpm;
@property (nonatomic) long long bars;
@property (nonatomic) long long samplesPerBar;
@property (retain, nonatomic) NSArray *customBarMarkers;

@end
