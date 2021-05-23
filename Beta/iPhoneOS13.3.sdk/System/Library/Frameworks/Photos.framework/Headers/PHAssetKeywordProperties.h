/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/PHAssetPropertySet.h>

@class NSSet;

@interface PHAssetKeywordProperties : PHAssetPropertySet

{
    NSSet *_keywordTitles;
}

@property (copy, nonatomic, readonly) NSSet *keywordTitles;

+ (id)propertiesToFetch;
+ (id)entityName;
+ (_Bool)isToMany;
+ (id)propertySetName;
+ (id)keyPathFromPrimaryObject;
+ (id)keyPathToPrimaryObject;

- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(_Bool)arg3;

@end
