/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/Swift-Protocol.h>

@protocol _GEOTileDBWriteOperation <Swift>

@property (nonatomic, readonly) unsigned long long sizeInBytes;

- (unsigned short)performWithDB: /* Error: Ran out of types for this method. */;
- (unsigned short)canIncreaseDataSizeInDB;
- (unsigned short)isSupercededByOperation: /* Error: Ran out of types for this method. */;
- (unsigned short)dataForKey:ETag:originalLoadReason:isKnownNotToExist: /* Error: Ran out of types for this method. */;

@end
