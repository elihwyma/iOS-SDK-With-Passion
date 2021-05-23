/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class SBFMobileKeyBag;

@interface SBDataRecoveryController : NSObject

{
    SBFMobileKeyBag *_mobileKeyBag;
}

@property (nonatomic, readonly) _Bool dataRecoveryRequired;

- (id)init;
- (void)performDataRecovery;
- (id)initWithMobileKeyBag:(id)arg1;

@end
