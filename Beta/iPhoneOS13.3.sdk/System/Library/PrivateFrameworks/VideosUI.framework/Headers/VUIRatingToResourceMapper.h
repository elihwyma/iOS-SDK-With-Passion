/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface VUIRatingToResourceMapper : NSObject

{
    NSDictionary *_mappingDictionary;
}

@property (retain, nonatomic) NSDictionary *mappingDictionary;

- (id)init;
- (id)_cleanRatingName:(id)arg1;
- (id)resourceForRating:(id)arg1 ratingSystem:(id)arg2;

@end
