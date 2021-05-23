/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <EventKit/EKPersistentNotification.h>

__attribute__((visibility("hidden")))
@interface EKPersistentInviteReplyNotification : EKPersistentNotification

+ (id)relations;
+ (id)defaultPropertiesToLoad;
+ (Class)meltedClass;

- (id)creationDate;
- (void)setCreationDate:(id)arg1;
- (id)summary;
- (void)setSummary:(id)arg1;
- (int)entityType;
- (unsigned long long)shareeStatus;
- (id)shareeDisplayName;
- (id)inReplyTo;
- (void)setInReplyTo:(id)arg1;
- (void)setShareeDisplayName:(id)arg1;
- (id)shareeFirstName;
- (void)setShareeFirstName:(id)arg1;
- (id)shareeLastName;
- (void)setShareeLastName:(id)arg1;
- (id)shareeURL;
- (void)setShareeURL:(id)arg1;
- (void)setShareeStatus:(unsigned long long)arg1;
- (_Bool)alerted;
- (id)inviteReplyCalendar;
- (void)setInviteReplyCalendar:(id)arg1;

@end
