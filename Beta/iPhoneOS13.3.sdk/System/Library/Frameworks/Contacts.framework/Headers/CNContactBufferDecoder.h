/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class CNContactKeyVector, CNMutableContact, NSMutableData;

__attribute__((visibility("hidden")))
@interface CNContactBufferDecoder : NSObject

{
    _Bool _mutableResults;
    CNContactKeyVector *_keyDescriptorToMakeAvailable;
    long long _state;
    CNMutableContact *_pendingContact;
    NSMutableData *_resumeBuffer;
    long long _bytesNeededToResume;
}

@property (nonatomic) long long state;
@property (retain, nonatomic) CNMutableContact *pendingContact;
@property (retain, nonatomic) NSMutableData *resumeBuffer;
@property (nonatomic) long long bytesNeededToResume;
@property (nonatomic) _Bool mutableResults;
@property (copy, nonatomic) CNContactKeyVector *keyDescriptorToMakeAvailable;
@property (readonly) _Bool hasPendingContacts;

- (id)contactsFromBuffer:(id)arg1;
- (id)completedPendingContactFromByteCursor:(char **)arg1 end:(char *)arg2;
- (id)_contactFromByteCursor:(char **)arg1 end:(char *)arg2;
- (void)_applyPropertiesFromFromByteCursor:(char **)arg1 end:(char *)arg2;
- (void)_applyMultivalueFromByteCursor:(char **)arg1 end:(char *)arg2 abPropertyID:(int)arg3;
- (void)_applyImageDataFromByteCursor:(char **)arg1 end:(char *)arg2;
- (id)initWithKeyDescriptorToMakeAvailable:(id)arg1 mutableResults:(_Bool)arg2;

@end
