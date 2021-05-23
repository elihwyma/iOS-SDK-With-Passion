/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSArray;

@protocol GEOTextItemDisplayConfig;

@interface GEOTextItemContainer : NSObject

{
    id <GEOTextItemDisplayConfig> _displayConfig;
    NSArray *_textItems;
}

@property (nonatomic, readonly) id <GEOTextItemDisplayConfig> displayConfig;
@property (nonatomic, readonly) NSArray *textItems;

- (id)init;
- (id)initWithTextItemContainer:(id)arg1;
- (id)initWithDisplayConfig:(id)arg1 textItems:(id)arg2;

@end
