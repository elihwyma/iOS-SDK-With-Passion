/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXObservable.h>

@class PHPhotoLibraryAppPrivateData;

@interface PXPhotoLibraryLocalDefaults : PXObservable

{
    PHPhotoLibraryAppPrivateData *_appPrivateData;
}

- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (_Bool)boolForKey:(id)arg1;
- (id)dictionaryWithValuesForKeys:(id)arg1;
- (id)stringForKey:(id)arg1;
- (id)arrayForKey:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (id)dataForKey:(id)arg1;
- (double)doubleForKey:(id)arg1;
- (void)setDouble:(double)arg1 forKey:(id)arg2;
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;
- (void)setString:(id)arg1 forKey:(id)arg2;
- (void)setArray:(id)arg1 forKey:(id)arg2;
- (void)setDictionary:(id)arg1 forKey:(id)arg2;
- (void)setData:(id)arg1 forKey:(id)arg2;
- (id)numberForKey:(id)arg1;
- (void)setNumber:(id)arg1 forKey:(id)arg2;
- (id)initWithPhotoLibrary:(id)arg1;
- (void)_notifyObserversDidChangeValueForKey:(id)arg1;
- (void)setIdentifiers:(id)arg1 forKey:(id)arg2;
- (id)identifiersForKey:(id)arg1;
- (void)addIdentifier:(id)arg1 forKey:(id)arg2;
- (void)removeIdentifier:(id)arg1 forKey:(id)arg2;

@end
