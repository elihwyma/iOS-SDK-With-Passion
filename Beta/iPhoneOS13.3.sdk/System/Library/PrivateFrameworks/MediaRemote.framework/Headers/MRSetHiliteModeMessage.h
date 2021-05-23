/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MRProtocolMessage.h>

@interface MRSetHiliteModeMessage : MRProtocolMessage

@property (nonatomic, readonly) _Bool hiliteMode;

- (unsigned long long)type;
- (id)initWithHiliteMode:(_Bool)arg1;

@end
