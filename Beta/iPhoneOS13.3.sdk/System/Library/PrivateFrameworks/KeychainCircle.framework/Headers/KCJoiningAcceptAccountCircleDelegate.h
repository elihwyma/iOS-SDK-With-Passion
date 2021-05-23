/*
 Image: /System/Library/PrivateFrameworks/KeychainCircle.framework/KeychainCircle
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface KCJoiningAcceptAccountCircleDelegate : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)delegate;

- (id)circleJoinDataFor:(struct __OpaqueSOSPeerInfo *)arg1 error:(id *)arg2;
- (id)circleGetInitialSyncViews:(unsigned int)arg1 error:(id *)arg2;

@end
