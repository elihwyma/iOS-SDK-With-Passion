/*
 Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

#import <Foundation/NSObject.h>

@interface ACManagedDefaults : NSObject

+ (id)sharedInstance;

- (id)_readManagedDefaults;
- (void)_writeManagedDefaults:(id)arg1;
- (id)valueForManagedDefault:(id)arg1;
- (void)setValue:(id)arg1 forManagedDefault:(id)arg2;

@end
