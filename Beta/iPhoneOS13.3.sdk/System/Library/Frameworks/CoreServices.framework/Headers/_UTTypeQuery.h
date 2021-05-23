/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <CoreServices/_LSQuery.h>

@interface _UTTypeQuery : _LSQuery

{
    unsigned long long _flags;
    void *_context;
    unsigned long long _propertyFlags;
}

@property (nonatomic, setter=_setContext:) struct LSContext *_context;
@property (nonatomic, setter=_setPropertiesToResolve:) unsigned long long _propertiesToResolve;
@property (nonatomic, setter=_setResolveInactiveDeclarations:) _Bool _resolveInactiveDeclarations;

+ (id)typeQueryWithIdentifier:(id)arg1;
+ (id)typeQueryWithTag:(id)arg1 ofClass:(id)arg2 conformsTo:(id)arg3 limit:(long long)arg4;
+ (id)typeQueryForAllDeclaredIdentifiers;
+ (id)typeQueryWithDescendantsOfIdentifier:(id)arg1 searchDepthLimit:(unsigned long long)arg2;
+ (void)_precacheTypesForIdentifiers:(id)arg1;
+ (id)typeQueryWithTag:(id)arg1 ofClass:(id)arg2 conformsTo:(id)arg3;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_init;
- (id)resolve;

@end
