/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/Swift-Protocol.h>

@class GEOActiveTileGroupMigrationTaskOptions;

@protocol NSObject;

@protocol GEOActiveTileGroupMigrationTask <Swift>

@property (nonatomic, readonly) long long estimatedWeight;
@property (retain, nonatomic) id <NSObject> transaction;
@property (retain, nonatomic) GEOActiveTileGroupMigrationTaskOptions *options;

- (unsigned short)cancel;
- (unsigned short)startWithCompletionHandler:callbackQueue: /* Error: Ran out of types for this method. */;
- (unsigned short)populateTileGroup: /* Error: Ran out of types for this method. */;
- (unsigned short)removeOldData: /* Error: Ran out of types for this method. */;

@end
