/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <TextInputCore/TIWordSearchOperation.h>

@class TILanguageModelAdaptationContext, TIMecabraWrapper;

@interface TIWordSearchOperationSetLanguageModelAdaptationContext : TIWordSearchOperation

{
    TIMecabraWrapper *_mecabraWrapper;
    TILanguageModelAdaptationContext *_adaptationContext;
}

@property (retain, nonatomic) TIMecabraWrapper *mecabraWrapper;
@property (copy, nonatomic) TILanguageModelAdaptationContext *adaptationContext;

- (void)cancel;
- (void)perform;
- (id)initWithWordSearch:(id)arg1 adaptationContext:(id)arg2;

@end
