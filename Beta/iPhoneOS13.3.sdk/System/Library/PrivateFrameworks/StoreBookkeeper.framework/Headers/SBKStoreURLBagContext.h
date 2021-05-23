/*
 Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL, SSURLBag;

@interface SBKStoreURLBagContext : NSObject

{
    _Bool _domainDisabled;
    double _pollingIntervalInSeconds;
    NSString *_domain;
    NSURL *_syncRequestURL;
    NSURL *_pushKeyValueRequestURL;
    NSURL *_pullKeyValueRequestURL;
    NSURL *_pushAllKeyValueRequestURL;
    NSURL *_pullAllKeyValueRequestURL;
    SSURLBag *_bag;
}

@property (retain) SSURLBag *bag;
@property (copy) NSString *domain;
@property (retain) NSURL *syncRequestURL;
@property (retain) NSURL *pushKeyValueRequestURL;
@property (retain) NSURL *pullKeyValueRequestURL;
@property (retain) NSURL *pushAllKeyValueRequestURL;
@property (retain) NSURL *pullAllKeyValueRequestURL;
@property _Bool domainDisabled;
@property double pollingIntervalInSeconds;

+ (id)UPPDomainIdentifier;
+ (id)ExtrasDomainIdentifier;
+ (void)loadBagContextFromURLBag:(id)arg1 domain:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (void)_findFirstValueInBag:(id)arg1 keyEnumerator:(id)arg2 valueTransformer:(CDUnknownBlockType)arg3 defaultValue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
+ (void)enumerateRequestURLBagKeysWithBlock:(CDUnknownBlockType)arg1;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithBag:(id)arg1 domain:(id)arg2;
- (id)_initWithDomain:(id)arg1 syncRequestURL:(id)arg2 domainDisabled:(_Bool)arg3;

@end
