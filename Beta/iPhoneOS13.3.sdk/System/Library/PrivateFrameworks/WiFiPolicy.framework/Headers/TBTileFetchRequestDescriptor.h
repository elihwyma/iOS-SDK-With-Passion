/*
 Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
 */

#import <Foundation/NSObject.h>

#import <WiFiPolicy/Swift-Protocol.h>

@class NSDate, NSPredicate, NSSet, NSString, PBCodable, TBLocalFetchRequestDescriptor;

@interface TBTileFetchRequestDescriptor : NSObject <Swift>

{
    TBLocalFetchRequestDescriptor *_localFetchDescriptor;
    unsigned long long _type;
    NSSet *_tileItems;
    TBLocalFetchRequestDescriptor *_preferLocalFetchDescriptor;
    NSPredicate *_localFetchPredicate;
    NSDate *_maxCacheAge;
}

@property (retain, nonatomic) NSSet *tileItems;
@property (retain, nonatomic) NSPredicate *localFetchPredicate;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) TBLocalFetchRequestDescriptor *localFetchDescriptor;
@property (retain, nonatomic) TBLocalFetchRequestDescriptor *preferLocalFetchDescriptor;
@property (retain, nonatomic) NSDate *maxCacheAge;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) PBCodable *remoteRequest;
@property (nonatomic, readonly) Class remoteRequestClass;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_preferLocalCacheFetchRequest;
- (id)initWithTileItems:(id)arg1 maxCacheAge:(id)arg2;
- (id)initWithTileItems:(id)arg1;

@end
