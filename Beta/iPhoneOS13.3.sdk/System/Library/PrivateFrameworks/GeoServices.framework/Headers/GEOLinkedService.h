/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOFeatureStyleAttributes, GEOPDLinkedService, NSArray, NSString, NSTimeZone;

@interface GEOLinkedService : NSObject

{
    GEOPDLinkedService *_linkedService;
    NSArray *_cachedBusinessHours;
    _Bool _checkedForBusinessHoursAlready;
    NSTimeZone *_timeZone;
    NSArray *_businessHours;
    NSString *_localizedCategoryName;
    GEOFeatureStyleAttributes *_styleAttributes;
}

@property (retain, nonatomic) NSTimeZone *timeZone;
@property (retain, nonatomic) NSArray *businessHours;
@property (retain, nonatomic) NSString *localizedCategoryName;
@property (retain, nonatomic) GEOFeatureStyleAttributes *styleAttributes;

- (id)initWithGEOPDLinkedService:(id)arg1 timeZone:(id)arg2;

@end
