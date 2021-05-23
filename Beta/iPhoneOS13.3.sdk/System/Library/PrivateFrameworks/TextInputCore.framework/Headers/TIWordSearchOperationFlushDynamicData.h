/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <TextInputCore/TIWordSearchOperation.h>

@class TIMecabraWrapper;

@interface TIWordSearchOperationFlushDynamicData : TIWordSearchOperation

{
    TIMecabraWrapper *_mecabraWrapper;
}

@property (retain, nonatomic) TIMecabraWrapper *mecabraWrapper;

- (void)cancel;
- (void)perform;
- (id)initWithWordSearch:(id)arg1;

@end
