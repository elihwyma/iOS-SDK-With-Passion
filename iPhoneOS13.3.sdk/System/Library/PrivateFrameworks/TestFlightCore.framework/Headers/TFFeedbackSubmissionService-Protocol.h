//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSObject, NSString;
@protocol TFFeedbackDataSource;

@protocol TFFeedbackSubmissionService <NSObject>
@property(readonly, nonatomic) NSUInteger maxNumberOfCommentSymbolsAllowed;
@property(readonly, nonatomic) NSUInteger maxNumberOfScreenshotsAllowed;
- (void)submitFeedbackForBundleId:(NSString *)arg1 withContentsOfDataSource:(NSObject<TFFeedbackDataSource> *)arg2 completionHandler:(void (^)(NSError *))arg3;
@end

