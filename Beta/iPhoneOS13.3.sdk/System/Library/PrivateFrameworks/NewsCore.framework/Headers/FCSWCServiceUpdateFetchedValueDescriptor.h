/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCFetchedValueDescriptor.h>

@class NSURL;

@interface FCSWCServiceUpdateFetchedValueDescriptor : FCFetchedValueDescriptor

{
    NSURL *_mappingDirectoryFileURL;
}

@property (copy, nonatomic, readonly) NSURL *mappingDirectoryFileURL;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMappingDirectoryFileURL:(id)arg1;
- (void)fetchValueWithCachePolicy:(unsigned long long)arg1 qualityOfService:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)isValue:(id)arg1 equalToValue:(id)arg2;
- (id)inputManagers;
- (id)fastCachedValue;

@end
