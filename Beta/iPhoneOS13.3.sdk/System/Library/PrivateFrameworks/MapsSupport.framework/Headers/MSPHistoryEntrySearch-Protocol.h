/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <MapsSupport/Swift-Protocol.h>

@class GEOMapRegion, NSString;

@protocol MSPHistoryEntrySearch <Swift>

@property (copy, nonatomic, readonly) NSString *query;
@property (copy, nonatomic, readonly) NSString *locationDisplayString;
@property (copy, nonatomic, readonly) NSString *languageCode;
@property (copy, nonatomic, readonly) GEOMapRegion *mapRegion;

@end
