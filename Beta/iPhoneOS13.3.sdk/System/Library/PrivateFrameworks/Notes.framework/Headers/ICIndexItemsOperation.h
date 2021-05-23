/*
 Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

#import <Foundation/NSOperation.h>

@class CSSearchableIndex, NSArray, NSError;

@interface ICIndexItemsOperation : NSOperation

{
    CSSearchableIndex *_searchableIndex;
    NSArray *_dataSources;
    unsigned long long _maxBytesPerBatch;
    NSError *_error;
}

@property (retain, nonatomic) CSSearchableIndex *searchableIndex;
@property (copy, nonatomic) NSArray *dataSources;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) unsigned long long maxBytesPerBatch;

- (id)init;
- (void)main;
- (void)deleteItems;
- (id)initWithSearchableIndex:(id)arg1 dataSources:(id)arg2;
- (void)indexItems;
- (id)objectIDURIsToDeleteFromDataSource:(id)arg1;
- (id)objectIDsToIndexFromDataSource:(id)arg1;

@end
