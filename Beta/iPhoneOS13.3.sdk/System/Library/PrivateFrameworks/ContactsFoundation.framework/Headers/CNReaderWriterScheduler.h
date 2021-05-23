/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@protocol OS_dispatch_queue;

@interface CNReaderWriterScheduler : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _suspended;
    NSMutableArray *_activeReaders;
    NSMutableArray *_pendingReaders;
    NSMutableArray *_activeWriters;
    NSMutableArray *_pendingWriters;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, getter=isSuspended) _Bool suspended;
@property (nonatomic, readonly) NSMutableArray *activeReaders;
@property (nonatomic, readonly) NSMutableArray *pendingReaders;
@property (nonatomic, readonly) NSMutableArray *activeWriters;
@property (nonatomic, readonly) NSMutableArray *pendingWriters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)resume;
- (void)suspend;
- (void)appendDescriptionToBuilder:(id)arg1;
- (void)addReaderWithIdentifier:(id)arg1;
- (void)activateReader:(id)arg1;
- (void)removeReader:(id)arg1;
- (id)performReaderBlock:(CDUnknownBlockType)arg1;
- (id)performWriterBlock:(CDUnknownBlockType)arg1;
- (void)performSynchronousReaderBlock:(CDUnknownBlockType)arg1;
- (void)performSynchronousWriterBlock:(CDUnknownBlockType)arg1;
- (void)addWriterWithIdentifier:(id)arg1;
- (void)activateWriter:(id)arg1;
- (void)removeWriter:(id)arg1;

@end
