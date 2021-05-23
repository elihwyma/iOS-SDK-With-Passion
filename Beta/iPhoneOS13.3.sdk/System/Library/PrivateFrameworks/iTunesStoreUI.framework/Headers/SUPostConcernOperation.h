/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStore/ISOperation.h>

@class NSNumber, NSString, SUConcernItem;

@interface SUPostConcernOperation : ISOperation

{
    NSString *_commentText;
    SUConcernItem *_concern;
    unsigned long long _itemIdentifier;
}

@property (retain) SUConcernItem *concern;
@property (retain) NSString *commentText;
@property unsigned long long itemIdentifier;
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
- (id)initWithConcern:(id)arg1;

@end
