/*
 Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

#import <ProactiveSupport/_PASDomainSelection.h>

@class NSSet;

@interface _PASImmutableDomainSelection : _PASDomainSelection

{
    NSSet *_domains;
}

- (_Bool)isEmpty;
- (id)_initWithNonOverlappingDomainSet:(id)arg1;
- (_Bool)containsDomain:(id)arg1;
- (id)allDomains;
- (_Bool)isEqualToDomainSelection:(id)arg1;

@end
