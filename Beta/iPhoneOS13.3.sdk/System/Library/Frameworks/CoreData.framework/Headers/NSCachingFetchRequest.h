/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSFetchRequest.h>

@class NSDictionary;

@interface NSCachingFetchRequest : NSFetchRequest

{
    NSDictionary *_substitutionVariables;
    id _cachedInfo;
    id _identifier;
    int _lock;
}

@property (nonatomic, readonly) id _identifier;
@property (copy, nonatomic) NSDictionary *substitutionVariables;

+ (id)_generateIdentifier;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)_isCachingFetchRequest;
- (id)_copyForDirtyContext;
- (void)_disableSQLStatementCaching;
- (id)_cachedInfoForRequestor:(id)arg1;
- (void)_cacheInfo:(id)arg1 forRequestor:(id)arg2;
- (void)_sanityCheckVariables:(id)arg1;

@end
