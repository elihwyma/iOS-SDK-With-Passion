/*
 Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface IMDCKSyncTokenStore : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)migrateKey:(id)arg1 fromDatabase:(id)arg2;
+ (id)tokenForKey:(id)arg1;
+ (void)persistToken:(id)arg1 forKey:(id)arg2;

- (void)migrateKey:(id)arg1 fromDatabase:(id)arg2;
- (id)tokenForKey:(id)arg1;
- (void)persistToken:(id)arg1 forKey:(id)arg2;

@end
