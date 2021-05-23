/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface _LSInstallNotificationJournaller : NSObject

{
    _Bool _preliminary;
    NSString *_primaryBundleID;
    NSMutableArray *_journalledNotifications;
    unsigned long long _operationType;
    double _timestamp;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)shouldJournalNotificationType:(int)arg1;
+ (void)createInstallJournalDirectoryIfRequired;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)timestamp;
- (void)sendNotification:(int)arg1 forApps:(id)arg2 withPlugins:(_Bool)arg3 options:(id)arg4;
- (id)primaryBundleID;
- (unsigned long long)installOperation;
- (_Bool)applicableForCurrentDatabase;
- (id)journalledNotifications;
- (void)sendNotification:(int)arg1 forApps:(id)arg2 withPlugins:(_Bool)arg3;
- (_Bool)isApplicationRegisteredWithbundleID:(id)arg1 placeholder:(_Bool)arg2;
- (_Bool)shouldExpectEntityToExist;
- (_Bool)entityExists;
- (id)synthesizedPreliminaryJournalledNotifications;
- (id)journalURL;
- (void)_writeJournalUnconditionally;
- (void)removeJournalFile;
- (id)initWithPrimaryBundleID:(id)arg1 operation:(unsigned long long)arg2;
- (void)writePreliminaryJournal;
- (void)writeFinalJournal;
- (void)setPrimaryBundleID:(id)arg1;
- (void)removeJournalAfterNotificationFence;

@end
