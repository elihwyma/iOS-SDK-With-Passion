/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface PXErrorRecoveryAttempter : NSObject

{
    NSArray *_recoveryOptions;
    long long _preferredRecoveryOptionIndex;
}

@property (copy, nonatomic) NSArray *recoveryOptions;
@property (nonatomic) long long preferredRecoveryOptionIndex;

- (id)init;
- (long long)alertActionStyleForRecoveryOptionAtIndex:(unsigned long long)arg1;
- (void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 delegate:(id)arg3 didRecoverSelector:(SEL)arg4 contextInfo:(void *)arg5;

@end
