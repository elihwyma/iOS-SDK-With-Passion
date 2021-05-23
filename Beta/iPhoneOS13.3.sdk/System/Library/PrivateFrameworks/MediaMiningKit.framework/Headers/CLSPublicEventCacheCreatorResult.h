/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface CLSPublicEventCacheCreatorResult : NSObject

{
    NSDictionary *_resolvedPublicEventsByTimeLocationIdentifier;
    NSDictionary *_invalidationTokenByTimeLocationIdentifier;
    unsigned long long _numberOfRequests;
}

@property (retain, nonatomic) NSDictionary *resolvedPublicEventsByTimeLocationIdentifier;
@property (retain, nonatomic) NSDictionary *invalidationTokenByTimeLocationIdentifier;
@property (nonatomic) unsigned long long numberOfRequests;

- (id)init;

@end
