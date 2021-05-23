/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/Swift-Protocol.h>

@protocol GEOMapServiceCancellableTicket <Swift>

@property (nonatomic, readonly, getter=isCancelled) _Bool cancelled;

- (unsigned short)cancel;

@end
