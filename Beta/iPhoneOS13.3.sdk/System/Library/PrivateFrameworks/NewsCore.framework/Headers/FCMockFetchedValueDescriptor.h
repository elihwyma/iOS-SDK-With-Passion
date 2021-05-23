/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCFetchedValueDescriptor.h>

@class NSArray, NSError;

@protocol NFCopying;

@interface FCMockFetchedValueDescriptor : FCFetchedValueDescriptor

{
    CDUnknownBlockType _willFetchBlock;
    id <NFCopying> _fetchValue;
    NSError *_fetchError;
    id <NFCopying> _fastCachedValue;
    CDUnknownBlockType _valueEqualityTest;
    unsigned long long _willFetchCount;
    long long _lastFetchQualityOfService;
    unsigned long long _lastFetchCachePolicy;
    NSArray *_myInputManagers;
}

@property (nonatomic) long long lastFetchQualityOfService;
@property (nonatomic) unsigned long long lastFetchCachePolicy;
@property (nonatomic) unsigned long long willFetchCount;
@property (copy, nonatomic, readonly) NSArray *myInputManagers;
@property (copy, nonatomic) CDUnknownBlockType willFetchBlock;
@property (copy, nonatomic) id <NFCopying> fetchValue;
@property (copy, nonatomic) NSError *fetchError;
@property (copy, nonatomic) id <NFCopying> fastCachedValue;
@property (copy, nonatomic) CDUnknownBlockType valueEqualityTest;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithInputManagers:(id)arg1;
- (void)fetchValueWithCachePolicy:(unsigned long long)arg1 qualityOfService:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)isValue:(id)arg1 equalToValue:(id)arg2;
- (id)inputManagers;

@end
