/*
 Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

#import <Foundation/NSObject.h>

@interface _TVRCMediaRemoteEndpointManager : NSObject

+ (id)sharedInstance;

- (void)updateActiveEndpoint:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)fetchActiveEndpointWithCompletion:(CDUnknownBlockType)arg1;

@end
