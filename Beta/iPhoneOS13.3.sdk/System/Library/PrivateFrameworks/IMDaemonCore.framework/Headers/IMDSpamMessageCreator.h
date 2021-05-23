/*
 Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

#import <Foundation/NSObject.h>

@interface IMDSpamMessageCreator : NSObject

- (id)transferForGuid:(id)arg1;
- (id)surfURLForIMMessageItem:(id)arg1;
- (id)metaDataForSurfURL:(id)arg1;
- (_Bool)isSurfPayment:(id)arg1;
- (_Bool)hasDataDetectedInformalPayment:(id)arg1;
- (void)reportUnknownToIDS:(id)arg1 messageID:(id)arg2 messageServerTimestamp:(id)arg3 toURI:(id)arg4;
- (id)reportMessageDictionaryForMessages:(id)arg1 withLastAddressedHandle:(id)arg2 maxMessageLength:(unsigned long long)arg3 isAutoReport:(_Bool)arg4 withChat:(id)arg5 maxMessagesToReport:(unsigned long long)arg6 totalMessageCount:(unsigned long long *)arg7 onlyReportForiMessageService:(_Bool)arg8 notifyInternalSecurity:(_Bool)arg9;

@end
