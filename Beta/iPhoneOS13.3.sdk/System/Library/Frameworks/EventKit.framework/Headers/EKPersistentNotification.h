/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <EventKit/EKPersistentObject.h>

__attribute__((visibility("hidden")))
@interface EKPersistentNotification : EKPersistentObject

+ (id)relations;

- (id)calendar;
- (id)UUID;
- (void)setUUID:(id)arg1;
- (id)externalID;
- (void)setExternalID:(id)arg1;
- (id)externalModificationTag;
- (void)setExternalModificationTag:(id)arg1;
- (int)entityType;
- (id)hostURL;
- (void)setHostURL:(id)arg1;

@end
