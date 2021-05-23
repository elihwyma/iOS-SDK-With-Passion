/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <MapsSupport/Swift-Protocol.h>

@class NSDate;

@protocol MSPHistoryEntry <Swift>

@property (copy, nonatomic, readonly) NSDate *usageDate;
@property (nonatomic, readonly) _Bool tracksRAPReportingOnly;

- (unsigned short)isFailed;
- (unsigned short)ifSearch:ifRoute:ifPlaceDisplay:ifTransitLineItem: /* Error: Ran out of types for this method. */;
- (unsigned short)isUserVisibleDuplicateOfEntry: /* Error: Ran out of types for this method. */;

@end
