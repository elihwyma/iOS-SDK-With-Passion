/*
 Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

#import <Foundation/NSObject.h>

@class CKContainer;

@interface IMDCKDatabaseManager : NSObject

{
    CKContainer *_manateeContainer;
    CKContainer *_nonHSA2ManateeContainer;
    CKContainer *_nickNameContainer;
}

@property (nonatomic, readonly) CKContainer *manateeContainer;
@property (nonatomic, readonly) CKContainer *nonHSA2ManateeContainer;
@property (nonatomic, readonly) CKContainer *nickNameContainer;
@property (nonatomic, readonly) CKContainer *truthContainer;
@property (nonatomic, readonly) _Bool useStingRay;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (id)truthDatabase;
- (id)manateeDataBase;
- (id)nonHSA2ManateeDatabase;
- (_Bool)_serverSaysToUseOldContainer;
- (id)_nickNameContainerIdentifier;
- (id)_nickNameContainer;
- (id)truthPublicDatabase;
- (id)nickNamePublicDatabase;
- (void)fetchCurrentUserForNicknameContainer:(CDUnknownBlockType)arg1;

@end
