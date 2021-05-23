/*
 Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

#import <SpringBoardServices/SBSLockScreenContentAssertion.h>

@interface SBSSecureAppAssertion : SBSLockScreenContentAssertion

{
    SBSLockScreenContentAssertion *_actualAssertion;
}

@property (retain, nonatomic) SBSLockScreenContentAssertion *actualAssertion;

+ (id)acquireSecureAppAssertionWithType:(unsigned long long)arg1 errorHandler:(CDUnknownBlockType)arg2;
+ (id)acquireSecureAppAssertionWithType:(unsigned long long)arg1 supportedOrientations:(unsigned long long)arg2 errorHandler:(CDUnknownBlockType)arg3;

@end
