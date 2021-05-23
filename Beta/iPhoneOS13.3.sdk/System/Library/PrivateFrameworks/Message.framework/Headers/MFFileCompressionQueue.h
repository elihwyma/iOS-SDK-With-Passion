/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface MFFileCompressionQueue : NSObject

{
    struct os_unfair_lock_s _fileCompressionQueueLock;
    NSMutableArray *_fileCompressionQueue;
}

@property (retain, nonatomic) NSMutableArray *fileCompressionQueue;
@property (nonatomic) struct os_unfair_lock_s fileCompressionQueueLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)log;

- (id)init;
- (long long)size;
- (void)addFile:(id)arg1;
- (_Bool)hasNext;
- (id)nextFile;

@end
