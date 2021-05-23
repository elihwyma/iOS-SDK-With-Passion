/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCArticleContentManifest, FCFetchOperation, NSError, NSString;

@protocol FCHeadlineProviding, OS_dispatch_group;

@interface FCArticle : NSObject

{
    NSString *_articleID;
    id <FCHeadlineProviding> _headline;
    FCArticleContentManifest *_contentManifest;
    NSObject<OS_dispatch_group> *_fetchGroup;
    NSError *_fetchError;
    FCFetchOperation *_headlineFetchOperation;
}

@property (retain, nonatomic) NSObject<OS_dispatch_group> *fetchGroup;
@property (retain, nonatomic) NSError *fetchError;
@property (retain, nonatomic) FCFetchOperation *headlineFetchOperation;
@property (retain, nonatomic) id <FCHeadlineProviding> headline;
@property (retain, nonatomic) FCArticleContentManifest *contentManifest;
@property (nonatomic, readonly) NSString *articleID;

- (id)init;
- (void)dealloc;
- (id)initWithContext:(id)arg1 articleID:(id)arg2 forceArticleUpdate:(_Bool)arg3 qualityOfService:(long long)arg4 relativePriority:(long long)arg5;
- (id)initWithContext:(id)arg1 headline:(id)arg2;
- (void)performBlockWhenFullyLoaded:(CDUnknownBlockType)arg1;
- (void)performBlockWhenContentManifestIsLoaded:(CDUnknownBlockType)arg1;

@end
