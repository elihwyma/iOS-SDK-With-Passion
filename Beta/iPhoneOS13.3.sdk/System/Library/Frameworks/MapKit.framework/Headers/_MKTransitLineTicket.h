/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class GEOMapServiceTraits, NSString;

@protocol GEOMapServiceTransitLineTicket;

__attribute__((visibility("hidden")))
@interface _MKTransitLineTicket : NSObject

{
    id <GEOMapServiceTransitLineTicket> _ticket;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) GEOMapServiceTraits *traits;

- (void)cancel;
- (void)submitWithHandler:(CDUnknownBlockType)arg1 networkActivity:(CDUnknownBlockType)arg2;
- (id)initWithTicket:(id)arg1;

@end
