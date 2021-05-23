/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString, NSTimeZone;

@protocol GEOTransitLine;

__attribute__((visibility("hidden")))
@interface _MKTransitInactiveLine : NSObject

{
    id <GEOTransitLine> _line;
    _Bool _blocked;
    NSDate *_serviceResumesDate;
    NSTimeZone *_timeZone;
    NSDate *_referenceDate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <GEOTransitLine> line;
@property (nonatomic, readonly) NSString *serviceResumesDescription;

- (id)initWithTransitLine:(id)arg1 blocked:(_Bool)arg2 serviceResumesDate:(id)arg3 timeZone:(id)arg4 referenceDate:(id)arg5;

@end
