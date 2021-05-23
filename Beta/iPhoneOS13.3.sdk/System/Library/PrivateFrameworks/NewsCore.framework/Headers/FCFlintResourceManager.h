/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@protocol FCContentContext;

@interface FCFlintResourceManager : NSObject

{
    id <FCContentContext> _context;
}

@property (nonatomic, readonly) id <FCContentContext> context;

- (id)init;
- (id)initWithContext:(id)arg1;
- (id)fetchResourcesWithIdentifiers:(id)arg1 downloadAssets:(_Bool)arg2 cacheLifetimeHint:(long long)arg3 relativePriority:(long long)arg4 callBackQueue:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (id)fetchResourcesWithIdentifiers:(id)arg1 downloadAssets:(_Bool)arg2 relativePriority:(long long)arg3 callBackQueue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (id)fetchFontResourcesWithIdentifiers:(id)arg1 downloadAssets:(_Bool)arg2 relativePriority:(long long)arg3 callBackQueue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (id)cachedResourcesWithIdentifiers:(id)arg1;

@end
