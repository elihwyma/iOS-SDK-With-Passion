/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASFolderLocalUpdateTask.h>

@interface ASFolderCreateTask : ASFolderLocalUpdateTask

- (long long)taskStatusForExchangeStatus:(int)arg1;
- (id)initWithFolder:(id)arg1 previousSyncKey:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_appendRequestBodyFolderDataToWBXMLData:(id)arg1;

@end
