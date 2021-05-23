/*
 Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
 */

#import <WiFiPolicy/Swift-Protocol.h>

@class NSArray, NSError;

@protocol TBTile;

@protocol TBFetchResponseTileItem <Swift>

@property (nonatomic, readonly) unsigned long long status;
@property (nonatomic, readonly) id <TBTile> tile;
@property (nonatomic, readonly) NSArray *networks;
@property (nonatomic, readonly) NSError *error;

@end
