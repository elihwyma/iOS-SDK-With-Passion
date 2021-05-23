/*
 Image: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
 */

#import <Foundation/NSObject.h>

@class NSArray, _KSCloudKitManager, _KSControlFileController, _KSRequestThrottle, _KSSystemTask;

@protocol OS_dispatch_queue;

@interface _KSUserWordsSynchroniser : NSObject

{
    NSObject<OS_dispatch_queue> *_workQueue;
    _KSCloudKitManager *_cloudKitManager;
    _KSControlFileController *_controlFile;
    _KSSystemTask *_pushTask;
    _Bool _taskRun;
    NSArray *_languagesIfOffline;
    _Bool _attemptingConnection;
    _Bool _retryPending;
    _Bool _needRetry;
    _KSRequestThrottle *_identityThrottle;
}

@property (retain, nonatomic) NSArray *requiredLanguages;

+ (id)sharedInstance;
+ (id)generateKeyWithSize:(unsigned long long)arg1;
+ (id)generateRecordNameForFilename:(id)arg1 withKey:(id)arg2;
+ (Class)infoClass;

- (id)init;
- (void)dealloc;
- (void)disable;
- (id)containerID;
- (void)checkConfiguration;
- (void)accountDidChange:(id)arg1;
- (id)information;
- (void)keyboardUsed;
- (void)checkForDownload:(id)arg1 uploads:(id)arg2 allLanguages:(id)arg3;
- (void)identitiesDidChange:(id)arg1;
- (id)initForTestingWithManager:(id)arg1 enablePushing:(_Bool)arg2;
- (void)deltaDownloadForLanguages:(id)arg1;
- (void)checkProgress:(int)arg1 withInfo:(id)arg2;
- (void)modifyInformationWithOperations:(CDUnknownBlockType)arg1;
- (id)generateRecordListForLanguages:(id)arg1;
- (void)overwriteFilesWithRecords:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)readFilesWithRecordIDs:(id)arg1 forColumns:(id)arg2 priority:(unsigned long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)generateKeyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadKeyWithCompletion:(CDUnknownBlockType)arg1;
- (void)saveKey:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)firstTimeDownloadWithKey:(id)arg1;
- (id)recordIDForLanguage:(id)arg1 withKey:(id)arg2;
- (id)filenameForLanguage:(id)arg1;
- (_Bool)checkErrors:(id)arg1;
- (void)dumpAllRecordsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)deleteZoneWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
