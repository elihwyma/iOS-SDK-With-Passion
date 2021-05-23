/*
 Image: /System/Library/PrivateFrameworks/TVUIKit.framework/TVUIKit
 */

#import <Foundation/NSObject.h>

@class NSCache, NSDictionary;

@interface _TVContentRatingBadgeManager : NSObject

{
    _Bool _cachesImages;
    NSCache *_imageCache;
    NSDictionary *_badgeDescriptors;
}

@property (retain, nonatomic) NSCache *imageCache;
@property (retain, nonatomic) NSDictionary *badgeDescriptors;
@property (nonatomic) _Bool cachesImages;

+ (id)sharedInstance;
+ (id)_imageLookupKeyWithRatingLabel:(id)arg1 inRatingSystem:(long long)arg2;
+ (id)_imageForUnknownRatingLabel:(id)arg1;
+ (void)_addImageDescriptorToDictionary:(id)arg1 ratingSystem:(long long)arg2 ratingLabel:(id)arg3 resourceName:(id)arg4 isTemplatedImage:(_Bool)arg5;
+ (id)_badgeDescriptorLookupKeyWithRatingLabel:(id)arg1 inRatingSystem:(long long)arg2;
+ (id)_cleanedRatingLabel:(id)arg1;

- (id)badgeForRatingLabel:(id)arg1 inRatingSystem:(long long)arg2 drawUnknownRatingBadge:(_Bool)arg3;
- (id)_badgeDescriptorForRatingLabel:(id)arg1 inRatingSystem:(long long)arg2;
- (id)_badgeDescriptorForContentRating:(id)arg1;
- (id)badgeForContentRating:(id)arg1 drawUnknownRatingBadge:(_Bool)arg2;
- (_Bool)isTemplatedBadgeForContentRating:(id)arg1;

@end
