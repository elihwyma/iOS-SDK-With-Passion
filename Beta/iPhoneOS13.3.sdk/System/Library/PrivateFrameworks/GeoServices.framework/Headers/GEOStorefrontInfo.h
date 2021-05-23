/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSArray;

@interface GEOStorefrontInfo : NSObject

{
    NSArray *_bundleIds;
}

@property (nonatomic, readonly) NSArray *bundleIds;

- (id)init;
- (id)initWithStorefront:(id)arg1;

@end
