/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@protocol FCContentContext;

@interface FCArticleController : NSObject

{
    id <FCContentContext> _context;
}

@property (retain, nonatomic) id <FCContentContext> context;

- (id)init;
- (id)initWithContext:(id)arg1;
- (id)articleWithID:(id)arg1 qualityOfService:(long long)arg2 relativePriority:(long long)arg3;
- (id)articleWithID:(id)arg1 forceArticleUpdate:(_Bool)arg2 qualityOfService:(long long)arg3 relativePriority:(long long)arg4;
- (id)articleWithID:(id)arg1;
- (id)articleWithHeadline:(id)arg1;
- (id)headlinesFetchOperationForArticleIDs:(id)arg1;
- (id)headlinesFetchOperationForArticleIDs:(id)arg1 ignoreCacheForArticleIDs:(id)arg2;

@end
