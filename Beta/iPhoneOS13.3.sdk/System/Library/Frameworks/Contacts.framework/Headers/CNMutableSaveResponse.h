/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/CNSaveResponse.h>

__attribute__((visibility("hidden")))
@interface CNMutableSaveResponse : CNSaveResponse

@property _Bool didAffectMeCard;

+ (_Bool)supportsSecureCoding;

- (void)setContainerSnapshot:(id)arg1 forIndexPath:(id)arg2;
- (void)setContactSnapshot:(id)arg1 forIndexPath:(id)arg2;
- (void)setGroupSnapshot:(id)arg1 forIndexPath:(id)arg2;

@end
