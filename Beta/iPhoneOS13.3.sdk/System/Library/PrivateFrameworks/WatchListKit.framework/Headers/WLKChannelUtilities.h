/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, WLKChannelsResponse;

@protocol OS_dispatch_queue;

@interface WLKChannelUtilities : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    _Bool _filtered;
    WLKChannelsResponse *_cachedResponse;
    NSDictionary *_channelsByBundleID;
}

@property (copy, nonatomic, readonly) NSDictionary *channelsByID;
@property (copy, nonatomic, readonly) NSDictionary *channelsByBundleID;
@property (copy, nonatomic, readonly) NSArray *orderedChannels;

+ (id)sharedInstance;
+ (id)sharedInstanceFiltered;
+ (id)_validiTunesBundles;
+ (_Bool)isItunesBundleID:(id)arg1;

- (id)init;
- (id)_configuration;
- (id)channelIDForBundleID:(id)arg1;
- (id)channelForBundleID:(id)arg1;
- (id)channelForID:(id)arg1;
- (id)initFiltered:(_Bool)arg1;
- (_Bool)isItunesOrFirstPartyBundleID:(id)arg1;

@end
