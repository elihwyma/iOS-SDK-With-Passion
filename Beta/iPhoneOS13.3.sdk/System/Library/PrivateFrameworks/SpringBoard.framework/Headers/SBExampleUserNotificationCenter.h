/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString, UNUserNotificationCenter;

@interface SBExampleUserNotificationCenter : NSObject

{
    UNUserNotificationCenter *_userNotificationCenter;
}

@property (nonatomic, readonly) NSString *latestNotificationRequestIdentifier;
@property (nonatomic, readonly) NSString *sectionIdentifier;

+ (id)sharedInstance;

- (void)publish;
- (void)update;
- (void)removeAllNotifications;
- (id)_userNotificationCenter;
- (void)publishWithNumberOfUniqueThreads:(unsigned long long)arg1;
- (void)_postNotificationWithID:(id)arg1 threadIdentifier:(id)arg2;
- (void)publish:(unsigned long long)arg1 numberOfUniqueThreads:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_existingNotificationRequestForIdentifier:(id)arg1;
- (id)_newNotificationRequest:(id)arg1 threadIdentifier:(id)arg2;
- (void)publish:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;

@end
