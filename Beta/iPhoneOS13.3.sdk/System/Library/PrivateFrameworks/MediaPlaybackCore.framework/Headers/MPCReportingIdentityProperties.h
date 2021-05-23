/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <Foundation/NSObject.h>

@class NSString, SSVPlayActivityEnqueuerProperties;

@interface MPCReportingIdentityProperties : NSObject

{
    _Bool _hasSubscriptionPlaybackCapability;
    NSString *_householdID;
    unsigned long long _storeAccountID;
    NSString *_storeFrontID;
    SSVPlayActivityEnqueuerProperties *_enqueuerProperties;
}

@property (copy, nonatomic) NSString *householdID;
@property (nonatomic) unsigned long long storeAccountID;
@property (copy, nonatomic) NSString *storeFrontID;
@property (nonatomic) _Bool hasSubscriptionPlaybackCapability;
@property (copy, nonatomic) SSVPlayActivityEnqueuerProperties *enqueuerProperties;

@end
