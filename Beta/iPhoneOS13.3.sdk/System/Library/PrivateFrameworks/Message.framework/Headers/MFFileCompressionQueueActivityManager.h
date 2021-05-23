/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MFFileCompressionQueueActivityManager : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)log;
+ (void)_registerXPCActivity;
+ (void)scheduleActivityIfNeeded;
+ (void)_unregisterXPCActivity;
+ (_Bool)compressFilesInQueue:(id)arg1 shouldDefer:(CDUnknownBlockType)arg2;
+ (void)unregisterXPCActivity;

@end
