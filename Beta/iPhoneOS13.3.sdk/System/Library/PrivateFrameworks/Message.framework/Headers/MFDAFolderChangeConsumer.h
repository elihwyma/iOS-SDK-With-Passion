/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@class MFConditionLock, MFDAFolderChangeResult;

@interface MFDAFolderChangeConsumer : NSObject

{
    MFConditionLock *_conditionLock;
    MFDAFolderChangeResult *_result;
}

- (id)init;
- (id)waitForResult;
- (void)folderChange:(id)arg1 finishedWithStatus:(long long)arg2 error:(id)arg3;

@end
