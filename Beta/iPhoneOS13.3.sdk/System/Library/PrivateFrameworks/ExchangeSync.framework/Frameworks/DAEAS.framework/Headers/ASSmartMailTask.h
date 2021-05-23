/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASSendMailTask.h>

@class NSString;

@interface ASSmartMailTask : ASSendMailTask

{
    int _messageType;
    NSString *_originalMessageId;
    NSString *_instanceId;
    NSString *_originalFolderId;
    NSString *_originalLongId;
    _Bool _retryWithoutReferences;
    _Bool _replaceMime;
    _Bool _shouldNotRetry;
}

@property (nonatomic) _Bool shouldNotRetry;

- (id)contentType;
- (id)command;
- (int)commandCode;
- (_Bool)getTopLevelToken:(char *)arg1 outStatusCodePage:(char *)arg2 outStatusToken:(char *)arg3;
- (_Bool)processContext:(id)arg1;
- (id)parameterData;
- (id)initWithMessage:(id)arg1 messageID:(id)arg2 messageType:(int)arg3 originalMessageID:(id)arg4 instanceId:(id)arg5 originalFolderID:(id)arg6 originalLongID:(id)arg7 replaceMime:(_Bool)arg8;
- (void)handleTopLevelErrorStatus:(id)arg1;
- (id)requestBodyStreamOutKnownSize:(int *)arg1;

@end
