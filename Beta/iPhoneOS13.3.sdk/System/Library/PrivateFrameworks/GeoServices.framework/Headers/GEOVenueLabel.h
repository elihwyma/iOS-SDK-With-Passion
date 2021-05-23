/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSString;

@interface GEOVenueLabel : NSObject

{
    NSString *_name;
    NSString *_shortName;
    NSString *_detail;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *shortName;
@property (nonatomic, readonly) NSString *detail;

- (id)init;
- (id)initWithName:(id)arg1;
- (id)initWithLabel:(id)arg1;
- (id)initWithName:(id)arg1 shortName:(id)arg2 detail:(id)arg3;

@end
