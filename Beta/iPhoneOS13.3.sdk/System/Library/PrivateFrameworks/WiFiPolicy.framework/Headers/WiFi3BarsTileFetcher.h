/*
 Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
 */

#import <Foundation/NSObject.h>

@class TBDataSourceMediator;

@interface WiFi3BarsTileFetcher : NSObject

{
    TBDataSourceMediator *_dataSourceMediator;
    unsigned long long _lastFetchedKey;
}

@property (retain, nonatomic) TBDataSourceMediator *dataSourceMediator;
@property (nonatomic) unsigned long long lastFetchedKey;

- (void)dealloc;
- (id)initWithDataSourceMediator:(id)arg1;
- (void)_handleLocationManagerVisitCallbackWithVisit:(id)arg1;

@end
