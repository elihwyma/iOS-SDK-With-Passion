/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class NSDictionary, NSString;

@interface ICURLBagLibraryDAAPConfiguration : NSObject

{
    NSDictionary *_bagDictionary;
}

@property (nonatomic, readonly) long long databaseID;
@property (nonatomic, readonly) NSString *databaseName;
@property (nonatomic, readonly) NSString *baseURL;
@property (nonatomic, readonly, getter=isOnlineGeniusForMatchEnabled) _Bool onlineGeniusForMatchEnabled;
@property (nonatomic, readonly) long long playDataBatchIntervalInMinutes;
@property (nonatomic, readonly) long long subscribedContainerPollingFrequencySeconds;
@property (nonatomic, readonly) long long updatePollingFrequencySeconds;
@property (nonatomic, readonly) long long autoUpdatePollingFrequencySeconds;
@property (nonatomic, readonly) unsigned long long maxSyncRetryIntervalSeconds;

- (id)description;
- (id)initWithBagLibraryDAAPDictionary:(id)arg1;

@end
