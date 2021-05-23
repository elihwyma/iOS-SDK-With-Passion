/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MRProtocolMessage.h>

@class NSData;

@interface MRRemoteTextInputMessage : MRProtocolMessage

@property (nonatomic, readonly) unsigned long long version;
@property (nonatomic, readonly) NSData *data;

- (unsigned long long)type;
- (id)initWithVersion:(unsigned long long)arg1 data:(id)arg2;

@end
