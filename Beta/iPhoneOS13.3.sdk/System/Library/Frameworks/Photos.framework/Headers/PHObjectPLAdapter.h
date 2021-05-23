/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

#import <Photos/Swift-Protocol.h>

@class NSMutableDictionary, NSMutableOrderedSet, NSString, PHPhotoLibrary, PLManagedObject;

@interface PHObjectPLAdapter : NSObject <Swift>

{
    PHPhotoLibrary *_photoLibrary;
    PLManagedObject *_backingManagedObject;
    NSMutableOrderedSet *_ignoredKeys;
    NSMutableDictionary *_modifiedKeyValues;
}

@property (nonatomic, readonly) PLManagedObject *backingManagedObject;
@property (retain, nonatomic) NSMutableOrderedSet *ignoredKeys;
@property (retain, nonatomic) NSMutableDictionary *modifiedKeyValues;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectWithPropertySets:(id)arg1;
- (id)mutableAccessingCopy;
- (id)initWithPLManagedObject:(id)arg1 photoLibrary:(id)arg2;

@end
