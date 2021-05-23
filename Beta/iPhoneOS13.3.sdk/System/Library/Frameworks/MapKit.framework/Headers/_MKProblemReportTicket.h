/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class GEOMapServiceTraits, NSString;

@protocol GEOMapServiceProblemReportTicket;

__attribute__((visibility("hidden")))
@interface _MKProblemReportTicket : NSObject

{
    id <GEOMapServiceProblemReportTicket> _ticket;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) GEOMapServiceTraits *traits;

- (void)cancel;
- (void)submitWithHandler:(CDUnknownBlockType)arg1 networkActivity:(CDUnknownBlockType)arg2;
- (id)initWithProblemReportTicket:(id)arg1;

@end
