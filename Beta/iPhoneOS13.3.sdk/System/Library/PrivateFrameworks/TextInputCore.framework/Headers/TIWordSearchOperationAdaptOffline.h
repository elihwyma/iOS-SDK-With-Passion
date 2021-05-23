/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <TextInputCore/TIWordSearchOperation.h>

@class NSString, TILanguageModelAdaptationContext, TIMecabraWrapper;

@interface TIWordSearchOperationAdaptOffline : TIWordSearchOperation

{
    TIMecabraWrapper *_mecabraWrapper;
    TILanguageModelAdaptationContext *_adaptationContext;
    NSString *_paragraph;
    double _timeStamp;
}

@property (retain, nonatomic) TIMecabraWrapper *mecabraWrapper;
@property (copy, nonatomic) TILanguageModelAdaptationContext *adaptationContext;
@property (copy, nonatomic) NSString *paragraph;
@property (nonatomic) double timeStamp;

- (void)cancel;
- (void)perform;
- (id)initWithWordSearch:(id)arg1 paragraph:(id)arg2 adaptationContext:(id)arg3 timeStamp:(double)arg4;

@end
