/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/PHAssetCollection.h>

@class NSArray, NSString, PHObject;

@interface PHRelatedCollection : PHAssetCollection

{
    long long _titleCategory;
    unsigned long long _relationType;
    NSArray *_debugInfo;
    PHObject *_relatedObject;
    NSString *_highlightLocalIdentifier;
    NSArray *_momentLocalIdentifiers;
    NSString *_subtitle;
}

@property (nonatomic, readonly) NSArray *debugInfo;
@property (nonatomic, readonly) PHObject *relatedObject;
@property (copy, nonatomic, readonly) NSString *highlightLocalIdentifier;
@property (nonatomic, readonly) NSArray *momentLocalIdentifiers;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) unsigned long long relationType;

+ (id)_relatedCollectionsFromInfos:(id)arg1 relatedObject:(id)arg2 photoLibrary:(id)arg3;
+ (id)transientCollectionListWithCollectionsRelatedToObject:(id)arg1 relationType:(unsigned long long)arg2 options:(id)arg3;
+ (id)transientCollectionListWithCollectionsRelatedToPersons:(id)arg1 relationType:(unsigned long long)arg2 options:(id)arg3;
+ (id)_transientCollectionListWithCollectionsRelatedToIdentifiers:(id)arg1 relationType:(unsigned long long)arg2 options:(id)arg3 photoLibrary:(id)arg4;

- (id)localizedSubtitle;
- (_Bool)canPerformEditOperation:(long long)arg1;
- (long long)titleCategory;
- (id)initTransientWithAssets:(id)arg1 orFetchResult:(id)arg2 relationType:(unsigned long long)arg3 relatedObject:(id)arg4 title:(id)arg5 subtitle:(id)arg6 titleCategory:(long long)arg7 highlightLocalIdentifier:(id)arg8 momentLocalIdentifiers:(id)arg9 debugInfo:(id)arg10;

@end
