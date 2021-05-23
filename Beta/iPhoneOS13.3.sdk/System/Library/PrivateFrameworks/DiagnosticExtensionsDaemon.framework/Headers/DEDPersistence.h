/*
 Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSUserDefaults;

@protocol OS_os_log;

@interface DEDPersistence : NSObject

{
    NSMutableSet *_bugSessionIdentifiers;
    NSUserDefaults *_userDefaults;
    NSObject<OS_os_log> *_log;
}

@property (retain) NSMutableSet *bugSessionIdentifiers;
@property (retain) NSUserDefaults *userDefaults;
@property (retain) NSObject<OS_os_log> *log;

+ (id)sharedInstance;

- (id)init;
- (void)removeBugSession:(id)arg1;
- (void)updateBugSession:(id)arg1;
- (id)loadSavedBugSessions;
- (_Bool)canProceedWithDevice:(id)arg1;
- (id)_indexKeyForBugSessionIdentifier:(id)arg1;
- (id)_indexKeyForBugSession:(id)arg1;
- (id)loadSavedSessionsFromPlist:(id)arg1;

@end
