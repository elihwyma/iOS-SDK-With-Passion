/*
 Image: /System/Library/PrivateFrameworks/KeychainCircle.framework/KeychainCircle
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface KCJoiningRequestAccountCircleDelegate : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)delegate;

- (struct __OpaqueSOSPeerInfo *)copyPeerInfoError:(id *)arg1;
- (_Bool)processCircleJoinData:(id)arg1 version:(int)arg2 error:(id *)arg3;

@end
