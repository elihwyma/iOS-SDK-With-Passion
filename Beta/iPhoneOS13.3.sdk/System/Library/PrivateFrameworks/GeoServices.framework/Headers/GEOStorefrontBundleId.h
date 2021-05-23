/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSDate;

@interface GEOStorefrontBundleId : NSObject

{
    unsigned long long _identifier;
    NSDate *_date;
}

@property (nonatomic, readonly) unsigned long long identifier;
@property (nonatomic, readonly) NSDate *date;

- (id)init;
- (id)initWithBundleId:(id)arg1;

@end
