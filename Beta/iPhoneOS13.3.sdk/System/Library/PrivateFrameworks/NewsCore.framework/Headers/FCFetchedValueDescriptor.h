/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface FCFetchedValueDescriptor : NSObject

@property (nonatomic, readonly) NSArray *inputManagers;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)fetchValueWithCachePolicy:(unsigned long long)arg1 qualityOfService:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)isValue:(id)arg1 equalToValue:(id)arg2;
- (id)fastCachedValue;
- (id)valuePromiseWithCachePolicy:(unsigned long long)arg1 qualityOfService:(long long)arg2;

@end
