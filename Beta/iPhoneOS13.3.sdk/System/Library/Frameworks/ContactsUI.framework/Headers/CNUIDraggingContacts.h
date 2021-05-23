/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class CNContactStore, NSArray, NSString;

@interface CNUIDraggingContacts : NSObject

{
    NSArray *_draggingContacts;
    CNContactStore *_contactStore;
}

@property (retain, nonatomic) NSArray *draggingContacts;
@property (nonatomic, readonly) CNContactStore *contactStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSArray *writableTypeIdentifiersForItemProvider;

+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;
+ (id)writableTypeIdentifiersForItemProvider;
+ (id)readableTypeIdentifiersForItemProvider;
+ (id)dragItemForContact:(id)arg1 withContactStore:(id)arg2;
+ (id)imageForDragging;
+ (_Bool)canAcceptDropForDropSession:(id)arg1;
+ (void)provideContactsForDropSession:(id)arg1 withKeys:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (void)provideVCardURLForDropSession:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (id)contactsWithIdentifiers:(id)arg1 store:(id)arg2 keysToFetch:(id)arg3 unifyResults:(_Bool)arg4 error:(id *)arg5;
+ (id)draggingContactsWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 contactStore:(id)arg3 error:(id *)arg4;
+ (id)draggingContactsForContacts:(id)arg1 contactStore:(id)arg2;

- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;
- (id)initWithDraggingContacts:(id)arg1 contactStore:(id)arg2;

@end
