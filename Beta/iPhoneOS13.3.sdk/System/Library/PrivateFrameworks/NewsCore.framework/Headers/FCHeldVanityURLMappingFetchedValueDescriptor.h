/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCFetchedValueDescriptor.h>

@class FCFetchedValueManager;

@protocol FCContentContext;

@interface FCHeldVanityURLMappingFetchedValueDescriptor : FCFetchedValueDescriptor

{
    id <FCContentContext> _contentContext;
    FCFetchedValueManager *_resourceConfigurationManager;
}

@property (nonatomic, readonly) id <FCContentContext> contentContext;
@property (nonatomic, readonly) FCFetchedValueManager *resourceConfigurationManager;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)fetchValueWithCachePolicy:(unsigned long long)arg1 qualityOfService:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)isValue:(struct FCShallowCopyPair *)arg1 equalToValue:(struct FCShallowCopyPair *)arg2;
- (id)inputManagers;
- (id)fastCachedValue;
- (void)_processFetchOperationResult:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)initWithContentContext:(id)arg1 resourceConfigurationManager:(id)arg2;

@end
