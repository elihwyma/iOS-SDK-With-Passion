/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MRProtocolMessage.h>

@class MRPlaybackSessionMigrateRequest;

@interface MRPlaybackSessionMigrateResponseMessage : MRProtocolMessage

@property (nonatomic, readonly) MRPlaybackSessionMigrateRequest *request;

- (unsigned long long)type;
- (id)initWithRequest:(id)arg1;

@end
