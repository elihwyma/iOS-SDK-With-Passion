/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface _MultiplatformDonationRecencyStore : NSObject

{
    NSMutableArray *_appDateInfo;
    NSMutableDictionary *_infoByLocalID;
    NSMutableDictionary *_infoByRemoteID;
}

- (id)init;
- (void)updateDataWithRemoteBundleIdentifier:(id)arg1 remoteDate:(id)arg2 localBundleIdentifier:(id)arg3 localDate:(id)arg4;
- (id)bundlesFromMostRecentlyProvidingPlatforms;

@end
