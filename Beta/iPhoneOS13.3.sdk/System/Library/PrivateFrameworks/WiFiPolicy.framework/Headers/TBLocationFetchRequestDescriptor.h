/*
 Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
 */

#import <Foundation/NSObject.h>

#import <WiFiPolicy/Swift-Protocol.h>

@class NSDate, NSPredicate, NSSet, NSString, PBCodable, TBLocalFetchRequestDescriptor;

@interface TBLocationFetchRequestDescriptor : NSObject <Swift>

{
    NSPredicate *_localFetchPredicate;
    PBCodable *_remoteRequest;
    unsigned long long _type;
    NSDate *_maxCacheAge;
    TBLocalFetchRequestDescriptor *_localFetchDescriptor;
    TBLocalFetchRequestDescriptor *_preferLocalFetchDescriptor;
    NSSet *_tileItems;
    unsigned long long _primaryTileKey;
    double _latitude;
    double _longitude;
}

@property (retain, nonatomic) NSPredicate *localFetchPredicate;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSSet *tileItems;
@property (nonatomic) unsigned long long primaryTileKey;
@property (retain, nonatomic) NSDate *maxCacheAge;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (retain, nonatomic) TBLocalFetchRequestDescriptor *localFetchDescriptor;
@property (retain, nonatomic) TBLocalFetchRequestDescriptor *preferLocalFetchDescriptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) PBCodable *remoteRequest;
@property (nonatomic, readonly) Class remoteRequestClass;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2 radius:(double)arg3 maxCacheAge:(id)arg4;
- (id)_localFetchRequest;
- (id)_preferLocalCacheFetchRequest;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2 maxCacheAge:(id)arg3;

@end
