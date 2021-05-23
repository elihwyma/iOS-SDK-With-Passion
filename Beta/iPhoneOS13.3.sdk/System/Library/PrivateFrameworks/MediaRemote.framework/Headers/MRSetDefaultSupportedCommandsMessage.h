/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MRProtocolMessage.h>

@class NSArray, NSString;

@interface MRSetDefaultSupportedCommandsMessage : MRProtocolMessage

@property (nonatomic, readonly) NSArray *supportedCommands;
@property (nonatomic, readonly) NSString *bundleID;

- (unsigned long long)type;
- (id)initWithDefaultSupportedCommands:(id)arg1 forClient:(id)arg2;

@end
