/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@protocol GEOMapServiceThrottlableTicket;

__attribute__((visibility("hidden")))
@interface _GEOThrottledTicket : NSObject

{
    unsigned int qos;
    id <GEOMapServiceThrottlableTicket> ticket;
    CDUnknownBlockType submissionHandler;
    double safeTime;
}

@property (retain, nonatomic) id <GEOMapServiceThrottlableTicket> ticket;
@property (copy, nonatomic) CDUnknownBlockType submissionHandler;
@property (nonatomic) unsigned int qos;
@property (nonatomic) double safeTime;

+ (id)ticket:(id)arg1 withHandler:(CDUnknownBlockType)arg2;

@end
