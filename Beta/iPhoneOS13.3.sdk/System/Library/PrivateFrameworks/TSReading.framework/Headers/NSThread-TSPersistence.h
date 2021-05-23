/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSThread.h>

@interface NSThread (TSPersistence)

+ (void)tsp_performSynchronousOperationMarkingThreadWithKey:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (_Bool)tsp_isArchiverThread;
+ (void)tsp_performSynchronousArchiverOperationUsingBlock:(CDUnknownBlockType)arg1;
+ (_Bool)tsp_hasReadFileAccess;
+ (void)tsp_performSynchronousOperationWithReadFileAccessUsingBlock:(CDUnknownBlockType)arg1;

@end
