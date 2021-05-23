/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class CNContactBufferDecoder, CNContactFetchRequest, NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CNiOSABContactBuffersDecoder : NSObject

{
    CNContactBufferDecoder *_decoder;
    NSMutableArray *_contactsWaitingForUnification;
    NSMutableDictionary *_matchInfosWaitingForUnification;
    CNContactFetchRequest *_fetchRequest;
}

@property (nonatomic, readonly) CNContactBufferDecoder *decoder;
@property (nonatomic, readonly) NSMutableArray *contactsWaitingForUnification;
@property (nonatomic, readonly) NSMutableDictionary *matchInfosWaitingForUnification;
@property (nonatomic, readonly) CNContactFetchRequest *fetchRequest;

- (id)init;
- (id)initWithFetchRequest:(id)arg1;
- (id)unifyContacts:(id)arg1 moreComing:(_Bool)arg2;
- (void)_addContactMatchInfoFromABMatchInfos:(id)arg1 forContact:(id)arg2 toDictionary:(id)arg3;
- (id)_contactMatchInfosFromABMatchInfos:(id)arg1 contacts:(id)arg2;
- (id)contactsFromData:(id)arg1 moreComing:(_Bool)arg2 error:(id *)arg3;
- (id)contactMatchInfosFromABMatchInfos:(id)arg1 contacts:(id)arg2;

@end
