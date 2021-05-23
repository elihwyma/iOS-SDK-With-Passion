/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MRProtocolMessage.h>

@class NSArray;

@interface MRSendCommandResultMessage : MRProtocolMessage

{
    NSArray *_results;
}

@property (nonatomic, readonly) unsigned int sendError;
@property (nonatomic, readonly) NSArray *results;

- (unsigned long long)type;
- (id)initWithCommandID:(id)arg1 sendError:(unsigned int)arg2 results:(id)arg3;

@end
