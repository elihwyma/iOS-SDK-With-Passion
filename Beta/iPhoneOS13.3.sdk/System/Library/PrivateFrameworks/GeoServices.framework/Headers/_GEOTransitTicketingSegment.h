/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOTransitTicketingSegment, NSString;

__attribute__((visibility("hidden")))
@interface _GEOTransitTicketingSegment : NSObject

{
    GEOTransitTicketingSegment *_segment;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *ticketingUrl;
@property (nonatomic, readonly) NSString *segmentName;

- (id)initWithSegment:(id)arg1;

@end
