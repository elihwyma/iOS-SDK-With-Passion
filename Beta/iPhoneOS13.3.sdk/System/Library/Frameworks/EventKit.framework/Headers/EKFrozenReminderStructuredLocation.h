/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <EventKit/EKFrozenReminderObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface EKFrozenReminderStructuredLocation : EKFrozenReminderObject

@property (readonly) NSString *uniqueIdentifier;

+ (_Bool)canCommitSelf;
+ (id)uniqueIdentifierForREMObject:(id)arg1;
+ (Class)meltedClass;

- (id)uuid;
- (id)title;
- (double)radius;
- (double)latitude;
- (double)longitude;
- (int)referenceFrame;
- (id)mapKitHandle;
- (id)_structuredLocation;
- (id)remObjectID;
- (id)updateParentToCommitSelf:(id)arg1;
- (id)initWithAlternateUniverseObject:(EKPersistentObject_556b3b22 *)arg1 inEventStore:(id)arg2 withUpdatedChildObjects:(id)arg3;
- (id)updatedStructuredLocation;
- (void)setLatitudeAndLongitudeFromAlternateUniverseObject:(EKPersistentObject_556b3b22 *)arg1 inChangeSet:(id)arg2;

@end
