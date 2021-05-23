/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSOperationQueue.h>

@interface NSOperationQueue (TSUAdditions)

@property (nonatomic, readonly) _Bool tsu_isCurrentQueue;

+ (id)tsu_newSerialOperationQueueWithName:(id)arg1;

- (void)tsu_performBlock:(CDUnknownBlockType)arg1;

@end
