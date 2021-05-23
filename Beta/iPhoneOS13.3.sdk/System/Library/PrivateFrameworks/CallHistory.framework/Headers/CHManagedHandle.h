/*
 Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

#import <CoreData/NSManagedObject.h>

@class CHHandle, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface CHManagedHandle : NSManagedObject

@property (nonatomic, readonly) CHHandle *chHandle;
@property (copy, nonatomic) NSString *normalizedValue;
@property (nonatomic) short type;
@property (retain, nonatomic) NSString *value;
@property (retain, nonatomic) NSSet *localParticipantCalls;
@property (retain, nonatomic) NSSet *remoteParticipantCalls;

+ (id)fetchRequest;
+ (id)managedHandlesForHandles:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)managedHandleForHandle:(id)arg1 inManagedObjectContext:(id)arg2;

- (id)copyWithContext:(id)arg1;

@end
