/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@interface MFAccountLoader : NSObject

+ (Class)accountClassForPersistentAccount:(id)arg1 error:(id *)arg2;
+ (id)_accountClassStringWithPersistentAccount:(id)arg1 error:(id *)arg2;
+ (Class)_accountClassForString:(id)arg1 error:(id *)arg2;
+ (_Bool)loadBundleForAccountClassString:(id)arg1 error:(id *)arg2;
+ (id)_bundlePathForAccountClassString:(id)arg1;
+ (id)accountWithPersistentAccount:(id)arg1 error:(id *)arg2;
+ (id)accountWithAccountTypeIdentifier:(id)arg1 error:(id *)arg2;

@end
