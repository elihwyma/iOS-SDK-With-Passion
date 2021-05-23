/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBApplicationInfo.h>

@interface _SBDMPolicyTestAppInfo : SBApplicationInfo

{
    _Bool _testAppBlocked;
}

@property (nonatomic) _Bool testAppBlocked;

- (_Bool)isBlockedForScreenTimeExpiration;

@end
