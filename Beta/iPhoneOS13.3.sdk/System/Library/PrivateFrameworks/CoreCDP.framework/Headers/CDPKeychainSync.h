/*
 Image: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
 */

#import <Foundation/NSObject.h>

@interface CDPKeychainSync : NSObject

+ (_Bool)isUserVisibleKeychainSyncEnabled;
+ (void)setUserVisibleKeychainSyncEnabled:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
+ (void)removeNonViewAwarePeersFromCircleWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
