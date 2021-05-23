/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <EventKit/EKPersistentNotification.h>

__attribute__((visibility("hidden")))
@interface EKPersistentResourceChangeNotification : EKPersistentNotification

+ (id)relations;
+ (Class)meltedClass;

- (id)lastModifiedDate;
- (void)setLastModifiedDate:(id)arg1;
- (int)entityType;
- (id)resourceChanges;
- (void)setResourceChanges:(id)arg1;

@end
