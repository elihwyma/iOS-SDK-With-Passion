/*
 Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

#import <NanoMediaRemote/Swift-Protocol.h>

@class NMROrigin;

@protocol NMROriginCommandHandler <Swift>

@property (nonatomic, readonly) NMROrigin *origin;

- (unsigned short)sendMediaRemoteCommand:options:launchApp:completion: /* Error: Ran out of types for this method. */;

@end
