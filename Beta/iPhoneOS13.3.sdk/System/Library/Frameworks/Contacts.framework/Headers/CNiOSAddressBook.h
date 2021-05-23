/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class NSMutableSet;

@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface CNiOSAddressBook : NSObject

{
    _Bool _addressBookIsShared;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableSet *_addressBookPool;
    CDUnknownBlockType _addressBookProvider;
    NSObject<OS_dispatch_source> *_memoryMonitoringSource;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic, readonly) NSMutableSet *addressBookPool;
@property (copy, nonatomic, readonly) CDUnknownBlockType addressBookProvider;
@property (nonatomic, readonly) NSObject<OS_dispatch_source> *memoryMonitoringSource;
@property (nonatomic, readonly) _Bool addressBookIsShared;

+ (void)initialize;
+ (void *)newInMemoryAddressBook;
+ (void *)newAddressBookWithDelegateInfo:(id)arg1;
+ (void *)newAddressBookWithURL:(id)arg1;

- (id)init;
- (id)initWithContactsEnvironment:(id)arg1;
- (void)performSynchronousWorkWithInvalidatedAddressBook:(CDUnknownBlockType)arg1;
- (void)performAsynchronousWorkWithInvalidatedAddressBook:(CDUnknownBlockType)arg1;
- (id)resultWithInvalidatedAddressBook:(CDUnknownBlockType)arg1;
- (id)initWithAddressBookProvider:(CDUnknownBlockType)arg1;
- (void)flushPool;
- (void *)popAddressBook;
- (void *)preparedAddressBook:(void *)arg1;
- (void)pushAddressBook:(void *)arg1;

@end
