/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCMultiStepFetchOperation.h>

@class FCArticleContentManifest, FCHeldRecords, FCInterestToken, NSArray, NSString, NTPBArticleRecord;

@protocol FCContentContext, FCFlintHelper;

@interface FCArticleContentFetchOperation : FCMultiStepFetchOperation

{
    id <FCContentContext> _context;
    id <FCFlintHelper> _flintHelper;
    NSString *_articleID;
    FCInterestToken *_webArchiveInterestToken;
    FCHeldRecords *_heldArticleRecords;
    NTPBArticleRecord *_articleRecord;
    FCArticleContentManifest *_contentManifest;
    NSArray *_flintResources;
}

@property (retain, nonatomic) id <FCContentContext> context;
@property (retain, nonatomic) id <FCFlintHelper> flintHelper;
@property (retain, nonatomic) NSString *articleID;
@property (retain, nonatomic) FCInterestToken *webArchiveInterestToken;
@property (retain, nonatomic) FCHeldRecords *heldArticleRecords;
@property (retain, nonatomic) NTPBArticleRecord *articleRecord;
@property (retain, nonatomic) FCArticleContentManifest *contentManifest;
@property (retain, nonatomic) NSArray *flintResources;

- (id)completeFetchOperation;
- (id)fetchContentManifestWithCompletion:(CDUnknownBlockType)arg1;
- (id)fetchWebExcerptWithCompletion:(CDUnknownBlockType)arg1;
- (id)fetchWebArchiveWithCompletion:(CDUnknownBlockType)arg1;
- (id)fetchFlintDocumentWithCompletion:(CDUnknownBlockType)arg1;
- (id)fetchFlintResourcesWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithContext:(id)arg1 flintHelper:(id)arg2 articleID:(id)arg3;

@end
