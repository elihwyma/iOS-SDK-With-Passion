/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCFetchedValueManager;

@protocol FCContentContext;

@interface FCVanityURLRedirectService : NSObject

{
    FCFetchedValueManager *_vanityURLMappingManager;
    id <FCContentContext> _contentContext;
}

@property (nonatomic, readonly) id <FCContentContext> contentContext;
@property (nonatomic, readonly) FCFetchedValueManager *vanityURLMappingManager;

- (id)init;
- (id)initWithContentContext:(id)arg1;
- (id)destinationURLForURL:(id)arg1;
- (id)_destinationURLForURL:(id)arg1;
- (_Bool)hasRedirectForURL:(id)arg1;
- (void)resolveURL:(id)arg1 withQualityOfService:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)acquireHoldTokenOnUnderlyingAssets;
- (void)updateUnderlyingMappingWithQualityOfService:(long long)arg1 completion:(CDUnknownBlockType)arg2;

@end
