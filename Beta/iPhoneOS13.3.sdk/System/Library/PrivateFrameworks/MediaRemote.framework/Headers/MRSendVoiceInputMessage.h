/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MRProtocolMessage.h>

@class MRAudioBuffer, MRAudioDataBlock;

@interface MRSendVoiceInputMessage : MRProtocolMessage

{
    MRAudioDataBlock *_dataBlock;
}

@property (nonatomic, readonly) MRAudioBuffer *buffer;
@property (nonatomic, readonly) CDStruct_ace97b7a time;
@property (nonatomic, readonly) float gain;

- (unsigned long long)type;
- (unsigned long long)priority;
- (void)_initializeDataIfNecessary;
- (id)initWithBuffer:(id)arg1 time:(CDStruct_ace97b7a)arg2 gain:(float)arg3;

@end
