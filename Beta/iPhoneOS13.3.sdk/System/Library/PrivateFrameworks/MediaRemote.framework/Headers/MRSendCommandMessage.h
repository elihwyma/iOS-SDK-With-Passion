/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MRProtocolMessage.h>

@class NSDate, NSDictionary, _MRNowPlayingPlayerPathProtobuf;

@interface MRSendCommandMessage : MRProtocolMessage

{
    NSDictionary *_options;
    NSDate *_serializationDate;
}

@property (nonatomic, readonly) unsigned int command;
@property (nonatomic, readonly) NSDictionary *options;
@property (nonatomic, readonly) NSDate *serializationDate;
@property (nonatomic, readonly) _MRNowPlayingPlayerPathProtobuf *playerPath;
@property (nonatomic, readonly) unsigned int appOptions;

- (unsigned long long)type;
- (id)initWithCommand:(unsigned int)arg1 options:(id)arg2 playerPath:(id)arg3;

@end
