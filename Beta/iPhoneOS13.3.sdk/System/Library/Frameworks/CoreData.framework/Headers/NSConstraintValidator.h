/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSArray, _PFModelMap;

__attribute__((visibility("hidden")))
@interface NSConstraintValidator : NSObject

{
    _PFModelMap *_modelMap;
    NSArray *_entities;
    id *_cachesByEntity;
}

- (void)dealloc;
- (void)reset;
- (id)initWithManagedObjectContext:(id)arg1;
- (void)registerObjects:(id)arg1;
- (id)validateForSave;
- (void)registerObject:(id)arg1;
- (id)validateCaches;
- (void)_addConstraintRoot:(id)arg1 forEntity:(id)arg2;

@end
