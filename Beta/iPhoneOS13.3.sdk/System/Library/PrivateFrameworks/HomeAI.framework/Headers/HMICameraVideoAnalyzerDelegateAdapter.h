/*
 Image: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMICameraVideoAnalyzerDelegateAdapter : NSObject

{
    CDUnknownBlockType _didAnalyzeFragment;
    CDUnknownBlockType _didFailAnalysisForFragment;
    CDUnknownBlockType _didFindSignificantEvent;
    CDUnknownBlockType _didNotAnalyzeFragment;
}

@property (copy, nonatomic) CDUnknownBlockType didAnalyzeFragment;
@property (copy, nonatomic) CDUnknownBlockType didFailAnalysisForFragment;
@property (copy, nonatomic) CDUnknownBlockType didFindSignificantEvent;
@property (copy, nonatomic) CDUnknownBlockType didNotAnalyzeFragment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)_finish;
- (void)analyzer:(id)arg1 didAnalyzeFragment:(id)arg2 withResult:(id)arg3;
- (void)analyzer:(id)arg1 didNotAnalyzeFragment:(id)arg2 withResult:(id)arg3;
- (void)analyzer:(id)arg1 didFindSignificantEvent:(id)arg2 inFragment:(id)arg3;
- (void)analyzer:(id)arg1 didFailAnalysisForFragment:(id)arg2 withError:(id)arg3;

@end
