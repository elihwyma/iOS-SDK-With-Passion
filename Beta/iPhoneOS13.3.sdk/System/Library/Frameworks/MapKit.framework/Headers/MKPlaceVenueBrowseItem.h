/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class GEOSearchCategory, NSString, UIImage;

__attribute__((visibility("hidden")))
@interface MKPlaceVenueBrowseItem : NSObject

{
    NSString *_title;
    UIImage *_image;
    GEOSearchCategory *_searchCategory;
}

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly) GEOSearchCategory *searchCategory;

+ (id)browseItemWithCategory:(id)arg1 nightMode:(_Bool)arg2;
+ (id)imageWithSearchCategory:(id)arg1 nightMode:(_Bool)arg2;

- (id)initWithTitle:(id)arg1 image:(id)arg2 searchCategory:(id)arg3;

@end
