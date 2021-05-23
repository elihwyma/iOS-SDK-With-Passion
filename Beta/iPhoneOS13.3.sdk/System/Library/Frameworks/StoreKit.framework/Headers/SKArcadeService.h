/*
 Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import <Foundation/NSObject.h>

@interface SKArcadeService : NSObject

+ (void)registerArcadeAppWithRandomFromLib:(id)arg1 randomFromLibLength:(unsigned int)arg2 resultHandler:(CDUnknownBlockType)arg3;
+ (void)arcadeSubscriptionStatusWithNonce:(unsigned long long)arg1 resultHandler:(CDUnknownBlockType)arg2;
+ (void)repairArcadeApp;

@end
