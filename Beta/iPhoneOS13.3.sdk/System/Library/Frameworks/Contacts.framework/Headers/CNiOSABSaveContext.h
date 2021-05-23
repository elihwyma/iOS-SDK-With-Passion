/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class CNMutableSaveResponse, CNSaveRequest, NSMapTable, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CNiOSABSaveContext : NSObject

{
    void *_addressBook;
    CNMutableSaveResponse *_saveResponse;
    NSMapTable *_contactIndicesByInstance;
    NSMapTable *_groupIndicesByInstance;
    NSMapTable *_containerIndicesByInstance;
    NSMutableDictionary *_abPersonsByIdentifier;
    NSMutableDictionary *_abGroupsByIdentifier;
    NSMutableDictionary *_abSourcesByIdentifier;
    NSMutableDictionary *_abAccountsByIdentifier;
    CNSaveRequest *_saveRequest;
}

@property (nonatomic, readonly) NSMapTable *contactIndicesByInstance;
@property (nonatomic, readonly) NSMapTable *groupIndicesByInstance;
@property (nonatomic, readonly) NSMapTable *containerIndicesByInstance;
@property (retain, nonatomic) NSMutableDictionary *abPersonsByIdentifier;
@property (retain, nonatomic) NSMutableDictionary *abGroupsByIdentifier;
@property (retain, nonatomic) NSMutableDictionary *abSourcesByIdentifier;
@property (retain, nonatomic) NSMutableDictionary *abAccountsByIdentifier;
@property (nonatomic, readonly) CNSaveRequest *saveRequest;
@property (nonatomic, readonly) CNMutableSaveResponse *saveResponse;
@property (nonatomic, readonly) void *addressBook;

- (void)dealloc;
- (void)_populateSaveRequestIndexTables;
- (id)initWithSaveRequest:(id)arg1 response:(id)arg2 addressBook:(void *)arg3;
- (id)indexPathForContactInstance:(id)arg1;
- (id)indexPathForGroupInstance:(id)arg1;
- (id)indexPathForContainerInstance:(id)arg1;

@end
