/*
 Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/POP.framework/POP
 */

#import <Foundation/NSObject.h>

@interface MFPOP3Fetcher : NSObject

+ (long long)_fetchWithAccount:(id)arg1 intoQueue:(id)arg2 newMessages:(unsigned long long)arg3 oldMessages:(unsigned long long)arg4 preservingUID:(id)arg5 withStore:(id)arg6;
+ (long long)fetchWithAccount:(id)arg1 newMessages:(unsigned long long)arg2 oldMessages:(unsigned long long)arg3 preservingUID:(id)arg4 withStore:(id)arg5;

@end
