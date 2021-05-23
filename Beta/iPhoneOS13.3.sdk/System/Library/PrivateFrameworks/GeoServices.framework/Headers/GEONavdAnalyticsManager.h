/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@protocol GEONavdAnalyticsReporter;

@interface GEONavdAnalyticsManager : NSObject

{
    id <GEONavdAnalyticsReporter> _analyticsReporter;
}

@property (retain, nonatomic) id <GEONavdAnalyticsReporter> analyticsReporter;

+ (id)sharedManager;

@end
