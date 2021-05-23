/*
 Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

#import <Foundation/NSObject.h>

@interface VTSiriPHash : NSObject

{
    unsigned char _signalFractional;
    short _signalEstimate;
}

@property short signalEstimate;
@property unsigned char signalFractional;

+ (id)sharedPhash;
+ (unsigned long long)sampleSizeForSignalEstimate;

- (id)init;
- (unsigned short)pHash:(float *)arg1 length:(int)arg2;

@end
