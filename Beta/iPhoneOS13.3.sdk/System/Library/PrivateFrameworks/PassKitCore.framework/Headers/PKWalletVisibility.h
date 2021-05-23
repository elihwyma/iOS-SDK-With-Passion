/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@interface PKWalletVisibility : NSObject

+ (id)setOfActiveRestrictionUUIDs;
+ (_Bool)isWalletVisible;
+ (_Bool)isWalletRestricted;
+ (void)updateWalletVisibility;

@end
