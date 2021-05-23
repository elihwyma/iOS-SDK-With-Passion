/*
 Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

#import <ProactiveSupport/_PASDomainSelection.h>

@class NSMutableDictionary;

@interface _PASMutableDomainSelection : _PASDomainSelection

{
    NSMutableDictionary *_domains;
    unsigned long long _count;
    _Bool _taintedByDeepDomain;
}

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (_Bool)isEmpty;
- (id)_initWithNonOverlappingDomainSet:(id)arg1;
- (_Bool)containsDomain:(id)arg1;
- (id)allDomains;
- (_Bool)isEqualToDomainSelection:(id)arg1;
- (_Bool)addDomainsFromSelection:(id)arg1;
- (_Bool)addDomain:(id)arg1;
- (_Bool)addDomainsFromArray:(id)arg1;
- (_Bool)addDomainsFromSet:(id)arg1;
- (_Bool)_addDomainsFrom:(id)arg1;
- (_Bool)_addDomainsFromOtherDictionary:(id)arg1 toOwnDictionary:(id)arg2 ownDictionaryIsPlaceholder:(_Bool)arg3;
- (void)_decrementCountAndMaybePruneItems:(id)arg1;

@end
