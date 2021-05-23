/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSArray, NSEntityDescription, NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface NSConstraintCache : NSObject

{
    NSArray *_constraint;
    NSArray *_extension;
    NSEntityDescription *_entity;
    NSMutableDictionary *_knownValues;
    NSMutableArray *_children;
}

@property (retain, nonatomic, readonly) NSArray *constraint;
@property (retain, nonatomic, readonly) NSArray *extension;
@property (nonatomic, readonly) NSEntityDescription *entity;
@property (retain, nonatomic, readonly) NSArray *children;

+ (void)createCachesForEntity:(id)arg1 forValidator:(id)arg2;

- (void)dealloc;
- (id)description;
- (void)reset;
- (void)registerObject:(id)arg1;
- (id)validateForSave:(id)arg1;
- (_Bool)_constraint:(id)arg1 extends:(id)arg2;
- (_Bool)_alreadyHasChildForEntity:(id)arg1 constraint:(id)arg2;
- (id)initForEntity:(id)arg1 constraint:(id)arg2 extension:(id)arg3;
- (void)_addChild:(id)arg1;
- (void)extendConstraint:(id)arg1 onParentEntity:(id)arg2 parentCache:(id)arg3;
- (id)keyForValues:(id)arg1;
- (void)registerObject:(id)arg1 forValues:(id)arg2;
- (_Bool)_intraStoreConflictsExistForValues:(id)arg1;

@end
