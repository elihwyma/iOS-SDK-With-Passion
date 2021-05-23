/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@interface PLManagedObjectValidator : NSObject

+ (id)validateManagedObject:(id)arg1;
+ (_Bool)validateAllObjectsWithEntityClass:(Class)arg1 inManagedObjectContext:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
+ (_Bool)validateAllObjectsUsingManagedObjectContext:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
+ (id)_entityClassesToValidate;

@end
