/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/PHAssetPropertySet.h>

@interface PHAssetPhotoCommentProperties : PHAssetPropertySet

{
    _Bool _hasUserLiked;
    unsigned long long _commentCount;
    unsigned long long _likeCount;
}

@property (nonatomic, readonly) unsigned long long commentCount;
@property (nonatomic, readonly) unsigned long long likeCount;
@property (nonatomic, readonly) _Bool hasUserLiked;

+ (id)propertiesToFetch;
+ (id)entityName;
+ (_Bool)isToMany;
+ (id)propertySetName;
+ (id)keyPathFromPrimaryObject;
+ (id)keyPathToPrimaryObject;

- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(_Bool)arg3;

@end
