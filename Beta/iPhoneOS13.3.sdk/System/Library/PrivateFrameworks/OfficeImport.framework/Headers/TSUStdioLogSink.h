/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSDateFormatter;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TSUStdioLogSink : NSObject

{
    NSObject<OS_dispatch_queue> *_logQueue;
    NSDateFormatter *_dateFormatter;
}

+ (id)sharedInstance;

- (id)init;
- (CDUnknownBlockType)logSinkBlockWithFilePointer:(struct __sFILE *)arg1;

@end
