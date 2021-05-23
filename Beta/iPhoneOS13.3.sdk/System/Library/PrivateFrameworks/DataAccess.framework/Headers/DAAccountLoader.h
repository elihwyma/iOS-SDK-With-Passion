/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface DAAccountLoader : NSObject

{
    NSMutableDictionary *_acAccountTypeToAccountFrameworkSubpath;
    NSMutableDictionary *_acAccountTypeToAccountDaemonBundleSubpath;
    NSMutableDictionary *_acAccountTypeToClassNames;
    NSMutableDictionary *_acParentAccountTypeToChildAccountTypes;
}

@property (retain, nonatomic) NSMutableDictionary *acAccountTypeToAccountFrameworkSubpath;
@property (retain, nonatomic) NSMutableDictionary *acAccountTypeToAccountDaemonBundleSubpath;
@property (retain, nonatomic) NSMutableDictionary *acAccountTypeToClassNames;
@property (retain, nonatomic) NSMutableDictionary *acParentAccountTypeToChildAccountTypes;

+ (id)sharedInstance;

- (id)init;
- (Class)daemonAppropriateAccountClassForACAccount:(id)arg1;
- (void)_addAccountInfo:(id)arg1 forFrameworkNamed:(id)arg2;
- (_Bool)_loadFrameworkAtSubpath:(id)arg1;
- (void)loadFrameworkForACAccountType:(id)arg1;
- (void)loadDaemonBundleForACAccountType:(id)arg1;
- (Class)daemonAccountClassForACAccount:(id)arg1;
- (Class)clientAccountClassForACAccount:(id)arg1;
- (Class)accountClassForACAccount:(id)arg1;
- (Class)agentClassForACAccount:(id)arg1;

@end
