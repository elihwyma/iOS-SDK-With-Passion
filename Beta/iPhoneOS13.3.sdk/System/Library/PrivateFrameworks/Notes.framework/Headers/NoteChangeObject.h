/*
 Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

#import <CoreData/NSManagedObject.h>

@class NSMutableSet, NSNumber, NoteStoreObject;

@interface NoteChangeObject : NSManagedObject

@property (retain, nonatomic) NoteStoreObject *store;
@property (retain, nonatomic) NSNumber *changeType;
@property (retain, nonatomic) NSMutableSet *noteIntegerIds;
@property (retain, nonatomic) NSMutableSet *noteServerIds;
@property (retain, nonatomic) NSMutableSet *noteServerIntIds;

@end
