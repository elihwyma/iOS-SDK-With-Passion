/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@class CNSuspendableSchedulerDecorator, NSString;

@interface CNVirtualReaderWriterScheduler : NSObject

{
    CNSuspendableSchedulerDecorator *_scheduler;
}

@property (nonatomic, readonly) CNSuspendableSchedulerDecorator *scheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)resume;
- (void)suspend;
- (id)initWithScheduler:(id)arg1;
- (id)performReaderBlock:(CDUnknownBlockType)arg1;
- (id)performWriterBlock:(CDUnknownBlockType)arg1;
- (void)performSynchronousReaderBlock:(CDUnknownBlockType)arg1;
- (void)performSynchronousWriterBlock:(CDUnknownBlockType)arg1;

@end
