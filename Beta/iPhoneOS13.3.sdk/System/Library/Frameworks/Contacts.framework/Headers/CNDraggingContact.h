/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class CNContact, CNContactStore, NSURL;

@interface CNDraggingContact : NSObject

{
    CNContact *_contact;
    CNContactStore *_contactStore;
    NSURL *_cachedFileURLRepresentation;
}

@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) NSURL *cachedFileURLRepresentation;

+ (id)os_log;
+ (id)availableDataRepresentationTypes;

- (id)fetchContactWithKeys:(id)arg1;
- (id)serializeContactToVCard:(id)arg1;
- (id)fileNameForContact:(id)arg1;
- (id)initWithContact:(id)arg1 contactStore:(id)arg2;
- (id)fileURLRepresentation;
- (void)cleanupFileURLRepresentation;
- (id)dataRepresentationForType:(id)arg1;

@end
