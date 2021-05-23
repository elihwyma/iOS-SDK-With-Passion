/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <Foundation/NSObject.h>

@class CNContactStore, NSMutableArray, NSString, NoteContext;

@protocol OS_dispatch_queue;

@interface DALocalDBHelper : NSObject

{
    NSObject<OS_dispatch_queue> *_abDBQueue;
    NSObject<OS_dispatch_queue> *_calDBQueue;
    NSObject<OS_dispatch_queue> *_noteDBQueue;
    int _abConnectionCount;
    int _calConnectionCount;
    int _noteConnectionCount;
    void *_abDB;
    CNContactStore *_contactStore;
    NSString *_familyDelegateAltDSID;
    NSString *_familyDelegateACAccountID;
    NSMutableArray *_saveRequests;
    struct CalDatabase *_calDB;
    NSString *_clientIdentifier;
    NoteContext *_noteDB;
    CDUnknownBlockType _calUnitTestCallbackBlock;
}

@property (nonatomic) void *abDB;
@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) NSString *familyDelegateAltDSID;
@property (retain, nonatomic) NSString *familyDelegateACAccountID;
@property (retain, nonatomic) NSMutableArray *saveRequests;
@property (nonatomic) int abConnectionCount;
@property (nonatomic) struct CalDatabase *calDB;
@property (nonatomic) int calConnectionCount;
@property (retain, nonatomic) NSString *clientIdentifier;
@property (retain, nonatomic) NoteContext *noteDB;
@property (nonatomic) int noteConnectionCount;
@property (copy, nonatomic) CDUnknownBlockType calUnitTestCallbackBlock;

+ (id)os_log;
+ (id)sharedInstanceForAccountType:(id)arg1 creatingClass:(Class)arg2;
+ (void)abSetTestABDBDir:(id)arg1;
+ (id)abTestABDBDir;
+ (void)calSetTestCalDBDir:(id)arg1;
+ (id)calTestCalDBDir;

- (id)init;
- (void)dealloc;
- (id)changeTrackingID;
- (void)abOpenDBWithClientIdentifier:(id)arg1;
- (void)addSaveRequest:(id)arg1;
- (void)executeAllSaveRequests;
- (_Bool)abCloseDBAndSave:(_Bool)arg1;
- (void)calOpenDBWithClientIdentifier:(id)arg1;
- (_Bool)calCloseDBAndSave:(_Bool)arg1;
- (void *)abDBThrowOnNil:(_Bool)arg1;
- (_Bool)useContacts;
- (void)_registerForAddressBookYieldNotifications;
- (_Bool)_abOpenDBWithClientIdentifier:(id)arg1;
- (_Bool)abSaveDB;
- (void)_registerForCalendarYieldNotifications;
- (_Bool)_calOpenDBWithClientIdentifier:(id)arg1;
- (_Bool)calSaveDB;
- (_Bool)noteSaveDB;
- (id)initWithContactsFamilyDelegateAltDSID:(id)arg1 familyDelegateACAccountID:(id)arg2;
- (void)removeDelegateDatabasesNotMatchingAltDSIDs:(id)arg1;
- (void)abOpenDBAsGenericClient;
- (void)abProcessAddedRecords;
- (void)abProcessAddedImages;
- (void)abValidateDefaultSource;
- (id)abConstraintPlistPath;
- (id)abDefaultAccountInfoSuitableForLogging;
- (void)calOpenDBAsGenericClient;
- (void)calClearSuperfluousChanges;
- (_Bool)calSaveDBAndFlushCaches;
- (void)noteOpenDB;
- (_Bool)noteCloseDBAndSave:(_Bool)arg1;
- (void)calUnitTestsSetCallbackBlockForSave:(CDUnknownBlockType)arg1;

@end
