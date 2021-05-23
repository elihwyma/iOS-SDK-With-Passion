/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSURL;

@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface TSURemotePropertyList : NSObject

{
    NSURL *_remoteURL;
    NSURL *_localURL;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSDictionary *_propertyList;
    NSObject<OS_dispatch_queue> *_checkQueue;
    NSObject<OS_dispatch_source> *_updateTimer;
    _Bool _didUpdateAtLeastOnce;
}

- (id)init;
- (void)dealloc;
- (id)objectForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (id)arrayForKey:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (id)URLForKey:(id)arg1;
- (id)URLRequest;
- (void)processResponse:(id)arg1 data:(id)arg2 error:(id)arg3;
- (void)startUpdateTimer;
- (void)processWillSuspend:(id)arg1;
- (void)processDidResume:(id)arg1;
- (double)timeIntervalUntilNextUpdate;
- (void)checkForUpdateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)validateUserDefaultsDownloadURL:(id)arg1;
- (id)deserializePropertyListData:(id)arg1 error:(out id *)arg2;
- (void)processPropertyList:(id)arg1;
- (id)initWithRemoteURL:(id)arg1 localURL:(id)arg2;
- (void)updateIfNeededWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
