/*
 Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class ISReview, NSNumber, NSString;

@interface ISPostReviewOperation

{
    _Bool _backgroundReview;
    ISReview *_review;
}

@property (getter=isBackgroundReview) _Bool backgroundReview;
@property (retain) ISReview *review;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSNumber *metricsLoadURLSessionDuration;
@property (nonatomic, readonly) NSNumber *metricsLoadURLSamplingPercentage;
@property (nonatomic, readonly) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;

- (void)dealloc;
- (void)run;
- (id)_httpBody;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;

@end
