/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASTask.h>

@class ASFolder, NSString;

@interface ASFolderLocalUpdateTask : ASTask

{
    NSString *_previousSyncKey;
    ASFolder *_folder;
    int _commandCode;
    int _requestType;
    CDUnknownBlockType _completionBlock;
    long long _dataclasses;
}

@property (nonatomic) long long dataclasses;

+ (id)taskWithFolder:(id)arg1 previousSyncKey:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;

- (void)finishWithError:(id)arg1;
- (id)requestBody;
- (int)commandCode;
- (_Bool)getTopLevelToken:(char *)arg1 outStatusCodePage:(char *)arg2 outStatusToken:(char *)arg3;
- (_Bool)processContext:(id)arg1;
- (id)initWithFolder:(id)arg1 previousSyncKey:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_appendRequestBodyFolderDataToWBXMLData:(id)arg1;

@end
