/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSArray, NSString;

@interface GEOMapItemVenueContents : NSObject

{
    NSString *_title;
    NSArray *_items;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSArray *items;

- (id)init;
- (id)initWithTitle:(id)arg1 items:(id)arg2;
- (id)initWithItemList:(id)arg1;

@end
