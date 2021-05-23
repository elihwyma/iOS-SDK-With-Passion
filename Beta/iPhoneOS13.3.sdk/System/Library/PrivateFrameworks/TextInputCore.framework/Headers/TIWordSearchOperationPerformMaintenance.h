/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <TextInputCore/TIWordSearchOperation.h>

@class TIMecabraWrapper;

@interface TIWordSearchOperationPerformMaintenance : TIWordSearchOperation

{
    TIMecabraWrapper *_mecabraWrapper;
}

@property (retain, nonatomic) TIMecabraWrapper *mecabraWrapper;

- (void)perform;
- (id)initWithMecabraWrapper:(id)arg1;

@end
