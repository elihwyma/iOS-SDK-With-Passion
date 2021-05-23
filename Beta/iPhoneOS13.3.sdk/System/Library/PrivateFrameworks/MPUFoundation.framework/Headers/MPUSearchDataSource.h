/*
 Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

#import <MPUFoundation/MPUQueryDataSource.h>

@class NSArray, NSOperationQueue, NSString, _MPUSearchOperation;

@interface MPUSearchDataSource : MPUQueryDataSource

{
    NSOperationQueue *_operationQueue;
    _MPUSearchOperation *_searchOperation;
    NSArray *_searchResults;
    MPUQueryDataSource *_dataSource;
    NSString *_searchString;
}

@property (nonatomic, readonly) MPUQueryDataSource *dataSource;
@property (nonatomic, readonly) NSString *searchString;

- (void)dealloc;
- (unsigned long long)count;
- (id)initWithDataSource:(id)arg1;
- (id)entities;
- (id)initWithDataSource:(id)arg1 operationQueue:(id)arg2;
- (void)filterResultsUsingSearchString:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_searchPropertiesForGroupingType:(long long)arg1;
- (void)filterResultsUsingSearchString:(id)arg1;
- (void)_searchOperation:(id)arg1 didFinishWithResults:(id)arg2;

@end
