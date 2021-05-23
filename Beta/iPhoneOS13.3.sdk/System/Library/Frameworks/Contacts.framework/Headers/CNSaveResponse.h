/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

#import <Contacts/Swift-Protocol.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CNSaveResponse : NSObject <Swift>

{
    NSMutableDictionary *_contactSnapshotsByIndexPath;
    NSMutableDictionary *_groupSnapshotsByIndexPath;
    NSMutableDictionary *_containerSnapshotsByIndexPath;
    _Bool _didAffectMeCard;
}

@property (readonly) _Bool didAffectMeCard;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)applySnapshotsToSaveRequest:(id)arg1;

@end
