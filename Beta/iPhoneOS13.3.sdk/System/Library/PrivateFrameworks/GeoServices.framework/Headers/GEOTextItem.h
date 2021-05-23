/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSString;

@interface GEOTextItem : NSObject

{
    NSString *_primaryText;
}

@property (nonatomic, readonly) NSString *primaryText;

- (id)init;
- (id)initWithPrimaryText:(id)arg1;
- (id)initWithTextItem:(id)arg1;

@end
