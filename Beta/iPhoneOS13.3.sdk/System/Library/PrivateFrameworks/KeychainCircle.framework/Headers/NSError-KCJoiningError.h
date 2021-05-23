/*
 Image: /System/Library/PrivateFrameworks/KeychainCircle.framework/KeychainCircle
 */

#import <Foundation/NSError.h>

@interface NSError (KCJoiningError)

+ (id)errorWithJoiningError:(int)arg1 format:(id)arg2;
+ (id)errorWithJoiningError:(int)arg1 format:(id)arg2 arguments:(char *)arg3;
+ (id)errorWithCoreCryptoStatus:(int)arg1 description:(id)arg2 args:(char *)arg3;
+ (id)errorWithOSStatus:(int)arg1 userInfo:(id)arg2;
+ (id)errorWithCoreCryptoStatus:(int)arg1 userInfo:(id)arg2;
+ (id)errorWithOSStatus:(int)arg1 description:(id)arg2 args:(char *)arg3;

- (id)initWithJoiningError:(int)arg1 userInfo:(id)arg2;
- (id)initWithCoreCryptoStatus:(int)arg1 userInfo:(id)arg2;
- (id)initWithCoreCryptoStatus:(int)arg1 description:(id)arg2 args:(char *)arg3;
- (id)initWithOSStatus:(int)arg1 userInfo:(id)arg2;
- (id)initWithOSStatus:(int)arg1 description:(id)arg2 args:(char *)arg3;

@end
