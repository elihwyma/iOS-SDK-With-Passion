/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@class NSEntityDescription, NSManagedObjectContext, NSMutableSet;

@interface PHObjectDeleteValidator : NSObject

{
    NSMutableSet *_deletedObjectIDs;
    NSEntityDescription *_entity;
    NSManagedObjectContext *_context;
}

- (id)initWithEntityName:(id)arg1 managedObjectContext:(id)arg2;
- (_Bool)recordObjectID:(id)arg1;
- (_Bool)validateForDeleteWithRequestsByObjectID:(id)arg1 error:(id *)arg2;

@end
