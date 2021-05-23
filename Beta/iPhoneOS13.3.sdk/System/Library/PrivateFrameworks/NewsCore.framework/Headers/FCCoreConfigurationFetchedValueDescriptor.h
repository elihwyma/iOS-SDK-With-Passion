/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCFetchedValueDescriptor.h>

@protocol FCCoreConfigurationManager;

@interface FCCoreConfigurationFetchedValueDescriptor : FCFetchedValueDescriptor

{
    id <FCCoreConfigurationManager> _configurationManager;
}

@property (nonatomic, readonly) id <FCCoreConfigurationManager> configurationManager;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithConfigurationManager:(id)arg1;
- (void)fetchValueWithCachePolicy:(unsigned long long)arg1 qualityOfService:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)isValue:(id)arg1 equalToValue:(id)arg2;
- (id)inputManagers;
- (id)fastCachedValue;

@end
