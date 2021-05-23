/*
 Image: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface SNResultsCollector : NSObject

{
    NSMutableArray *_results;
    NSMutableArray *_errors;
    long long _completeCount;
}

@property (nonatomic, readonly) NSArray *results;
@property (nonatomic, readonly) NSArray *errors;
@property (nonatomic, readonly) long long completeCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)clearErrors;
- (void)clearResults;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)request:(id)arg1 didProduceResult:(id)arg2;
- (void)requestDidComplete:(id)arg1;
- (void)clearCompleteCount;

@end
