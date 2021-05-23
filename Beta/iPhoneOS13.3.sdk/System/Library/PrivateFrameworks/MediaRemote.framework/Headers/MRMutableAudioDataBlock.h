/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MRAudioDataBlock.h>

@class MRAudioBuffer;

__attribute__((visibility("hidden")))
@interface MRMutableAudioDataBlock : MRAudioDataBlock

@property (retain, nonatomic) MRAudioBuffer *buffer;
@property (nonatomic) CDStruct_ace97b7a time;
@property (nonatomic) float gain;

@end
