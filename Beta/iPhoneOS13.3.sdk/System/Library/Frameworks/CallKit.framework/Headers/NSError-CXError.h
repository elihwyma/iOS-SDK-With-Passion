/*
 Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

#import <Foundation/NSError.h>

@interface NSError (CXError)

+ (id)cx_callDirectoryManagerErrorWithCode:(long long)arg1;
+ (id)cx_callDirectoryManagerErrorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)cx_requestTransactionErrorWithCode:(long long)arg1;
+ (id)cx_callDirectoryStoreErrorWithCode:(long long)arg1;
+ (id)cx_errorWithCode:(long long)arg1;
+ (id)cx_incomingCallErrorWithCode:(long long)arg1;

@end
