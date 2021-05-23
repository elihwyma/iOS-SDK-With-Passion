/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@class PLAppPrivateData;

@interface PHPhotoLibraryAppPrivateData : NSObject

{
    PLAppPrivateData *_impl;
}

@property (retain) PLAppPrivateData *impl;

+ (_Bool)accessInstanceVariablesDirectly;

- (id)debugDescription;
- (void)invalidate;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (id)dictionaryWithValuesForKeys:(id)arg1;
- (void)setValuesForKeysWithDictionary:(id)arg1;
- (id)initWithLibrary:(id)arg1;

@end
