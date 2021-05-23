/*
 Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
 */

#import <Foundation/NSObject.h>

#import <WiFiPolicy/Swift-Protocol.h>

@class GEOWiFiQualityNetworkSearch, NSDate, NSPredicate, NSSet, NSString, TBLocalFetchRequestDescriptor;

@interface TBNetworkFetchRequestDescriptor : NSObject <Swift>

{
    NSPredicate *_localFetchPredicate;
    GEOWiFiQualityNetworkSearch *_remoteRequest;
    unsigned long long _type;
    NSDate *_maxCacheAge;
    TBLocalFetchRequestDescriptor *_localFetchDescriptor;
    TBLocalFetchRequestDescriptor *_preferLocalFetchDescriptor;
    NSSet *_bssids;
}

@property (retain, nonatomic) GEOWiFiQualityNetworkSearch *remoteRequest;
@property (retain, nonatomic) NSPredicate *localFetchPredicate;
@property (retain, nonatomic) NSSet *bssids;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSDate *maxCacheAge;
@property (retain, nonatomic) TBLocalFetchRequestDescriptor *localFetchDescriptor;
@property (retain, nonatomic) TBLocalFetchRequestDescriptor *preferLocalFetchDescriptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) Class remoteRequestClass;
@property (nonatomic, readonly) NSSet *tileItems;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBSSIDs:(id)arg1 maxCacheAge:(id)arg2;
- (id)initWithBSSIDs:(id)arg1;

@end
