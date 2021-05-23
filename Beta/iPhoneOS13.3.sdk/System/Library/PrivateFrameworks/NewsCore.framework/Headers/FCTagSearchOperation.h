/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCOperation.h>

@class FCAssetManager, FCCKContentDatabase, FCStreamingResults, FCTagRecordSource, NSError, NSString;

@protocol FCContentContext;

@interface FCTagSearchOperation : FCOperation

{
    id <FCContentContext> _contentContext;
    NSString *_searchString;
    unsigned long long _tagType;
    unsigned long long _batchSize;
    CDUnknownBlockType _searchResultsBlock;
    FCTagRecordSource *_tagRecordSource;
    FCCKContentDatabase *_contentDatabase;
    FCAssetManager *_assetManager;
    FCStreamingResults *_searchResults;
    NSError *_searchError;
}

@property (retain, nonatomic) FCTagRecordSource *tagRecordSource;
@property (retain, nonatomic) FCCKContentDatabase *contentDatabase;
@property (retain, nonatomic) FCAssetManager *assetManager;
@property (retain, nonatomic) FCStreamingResults *searchResults;
@property (retain, nonatomic) NSError *searchError;
@property (retain, nonatomic) id <FCContentContext> contentContext;
@property (copy, nonatomic) NSString *searchString;
@property (nonatomic) unsigned long long tagType;
@property (nonatomic) unsigned long long batchSize;
@property (copy) CDUnknownBlockType searchResultsBlock;

- (id)_localIdentifier;
- (_Bool)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)arg1;
- (void)prepareOperation;
- (void)_performSearchQuery:(CDUnknownBlockType)arg1;
- (id)_establishStreamOfTags;

@end
