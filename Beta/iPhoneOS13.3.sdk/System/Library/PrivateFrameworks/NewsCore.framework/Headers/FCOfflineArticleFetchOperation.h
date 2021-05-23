/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCMultiStepFetchOperation.h>

@class FCHeadline, NSString;

@protocol FCContentContext, FCFlintHelper;

@interface FCOfflineArticleFetchOperation : FCMultiStepFetchOperation

{
    id <FCContentContext> _context;
    id <FCFlintHelper> _flintHelper;
    NSString *_articleID;
    FCHeadline *_headline;
    id _thumbnailFetchedObject;
    id _classificationFetchedObject;
    id _contentFetchedObject;
}

@property (retain, nonatomic) id <FCContentContext> context;
@property (retain, nonatomic) id <FCFlintHelper> flintHelper;
@property (copy, nonatomic) NSString *articleID;
@property (retain, nonatomic) FCHeadline *headline;
@property (retain, nonatomic) id thumbnailFetchedObject;
@property (retain, nonatomic) id classificationFetchedObject;
@property (retain, nonatomic) id contentFetchedObject;

- (id)completeFetchOperation;
- (id)initWithContext:(id)arg1 flintHelper:(id)arg2 articleID:(id)arg3;
- (id)fetchHeadlineWithCompletion:(CDUnknownBlockType)arg1;
- (id)fetchThumbnailWithCompletion:(CDUnknownBlockType)arg1;
- (id)fetchContentWithCompletion:(CDUnknownBlockType)arg1;

@end
