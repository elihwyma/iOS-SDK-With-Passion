/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSDictionary, NSMutableArray, NSMutableDictionary;

@interface WBSCloudHistoryFetchResult : NSObject

{
    NSMutableArray *_mutableCloudHistoryVisits;
    NSMutableArray *_mutableHistoryTombstones;
    NSMutableDictionary *_mutableClientVersions;
    NSData *_serverChangeTokenData;
}

@property (nonatomic, readonly) NSArray *cloudHistoryVisits;
@property (nonatomic, readonly) NSArray *historyTombstones;
@property (nonatomic, readonly) NSDictionary *clientVersions;
@property (nonatomic, readonly) NSData *serverChangeTokenData;

- (id)init;
- (id)description;
- (void)_addCloudHistoryVisit:(id)arg1;
- (void)_updateClientVersion:(unsigned long long)arg1 seenAt:(id)arg2;
- (void)_addHistoryTombstone:(id)arg1;
- (void)_setServerChangeTokenData:(id)arg1;

@end
