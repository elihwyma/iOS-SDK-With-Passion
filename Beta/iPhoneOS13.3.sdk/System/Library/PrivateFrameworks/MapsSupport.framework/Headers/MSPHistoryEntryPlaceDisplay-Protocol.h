/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <MapsSupport/Swift-Protocol.h>

@class NSUUID;

@protocol GEOMapItem;

@protocol MSPHistoryEntryPlaceDisplay <Swift>

@property (nonatomic, readonly) id <GEOMapItem> geoMapItem;
@property (copy, nonatomic, readonly) NSUUID *supersededSearchStorageIdentifier;

@end
