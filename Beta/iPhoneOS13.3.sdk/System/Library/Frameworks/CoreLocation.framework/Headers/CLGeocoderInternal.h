/*
 Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

#import <Foundation/NSObject.h>

@class CLSilo;

@protocol GEOMapServiceTicket, OS_dispatch_queue;

@interface CLGeocoderInternal : NSObject

{
    CDUnknownBlockType _geocodeCompletionHandler;
    id <GEOMapServiceTicket> _ticket;
    NSObject<OS_dispatch_queue> *_queue;
    CLSilo *_responseSilo;
}

@property (retain) CLSilo *responseSilo;

- (id)init;
- (void)dealloc;

@end
