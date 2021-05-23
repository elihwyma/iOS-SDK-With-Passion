/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MRProtocolMessage.h>

@class NSArray, NSMutableArray;

@interface MRCompositeMessage : MRProtocolMessage

{
    NSMutableArray *_messages;
}

@property (nonatomic, readonly) NSArray *messages;

- (void)addMessage:(id)arg1;

@end
