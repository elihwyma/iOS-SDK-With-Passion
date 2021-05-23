/*
 Image: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
 */

#import <Foundation/NSObject.h>

@class NSData, NSDate, NSString, PCSLockAssertion, PCSMTT;

@protocol OS_os_transaction;

@interface PCSCKKSItemModifyContext : NSObject

{
    struct __CFDictionary *_rollAttributes;
    _Bool _sync;
    _Bool _roll;
    _Bool _returnedExistingIdentity;
    int _retryLeftCount;
    struct _PCSIdentitySetData *_set;
    struct __PCSLogContext *_log;
    long long _timeoutValue;
    NSString *_dsid;
    NSString *_service;
    struct _PCSIdentityData *_currentIdentity;
    NSData *_currentItemReference;
    NSData *_existingItemReference;
    NSData *_existingItemSHA1;
    struct _PCSIdentityData *_rollIdentity;
    NSData *_rollItemReference;
    NSData *_rollItemSHA1;
    NSDate *_server_NextRollDate;
    struct _PCSIdentityData *_relocateIdentity;
    PCSMTT *_mtt;
    NSObject<OS_os_transaction> *_transaction;
    PCSLockAssertion *_lockAssertion;
    id _activityAssertion;
}

@property (retain) NSObject<OS_os_transaction> *transaction;
@property (retain) PCSLockAssertion *lockAssertion;
@property (retain) id activityAssertion;
@property struct _PCSIdentitySetData *set;
@property struct __PCSLogContext *log;
@property long long timeoutValue;
@property (retain) NSString *dsid;
@property (retain) NSString *service;
@property struct _PCSIdentityData *currentIdentity;
@property (retain) NSData *currentItemReference;
@property (retain) NSData *existingItemReference;
@property (retain) NSData *existingItemSHA1;
@property struct _PCSIdentityData *rollIdentity;
@property (retain) NSData *rollItemReference;
@property (retain) NSData *rollItemSHA1;
@property (retain) NSDate *server_NextRollDate;
@property struct _PCSIdentityData *relocateIdentity;
@property _Bool sync;
@property _Bool roll;
@property int retryLeftCount;
@property (readonly) PCSMTT *mtt;
@property _Bool returnedExistingIdentity;

- (id)init;
- (void)dealloc;
- (void)resetIdentities;

@end
