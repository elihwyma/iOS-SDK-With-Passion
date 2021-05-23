/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class CNSuspendableSchedulerDecorator, NSString;

@protocol CNScheduler, CNSchedulerProvider;

__attribute__((visibility("hidden")))
@interface CNUISchedulerProvider : NSObject

{
    id <CNSchedulerProvider> _schedulerProvider;
    CNSuspendableSchedulerDecorator *_suspendableBackgroundScheduler;
    id <CNScheduler> _afterCACommitScheduler;
}

@property (nonatomic, readonly) id <CNSchedulerProvider> schedulerProvider;
@property (nonatomic, readonly) CNSuspendableSchedulerDecorator *suspendableBackgroundScheduler;
@property (nonatomic, readonly) id <CNScheduler> afterCACommitScheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <CNScheduler> backgroundScheduler;
@property (nonatomic, readonly) id <CNScheduler> mainThreadScheduler;
@property (nonatomic, readonly) id <CNScheduler> inlineScheduler;
@property (nonatomic, readonly) id <CNScheduler> immediateScheduler;

+ (id)makeBackgroundScheduler;

- (id)init;
- (id)newSerialSchedulerWithName:(id)arg1;
- (id)newSynchronousSerialSchedulerWithName:(id)arg1;
- (id)backgroundSchedulerWithQualityOfService:(unsigned long long)arg1;
- (id)initWithSchedulerProvider:(id)arg1;
- (id)newReaderWriterSchedulerWithName:(id)arg1;
- (void)suspendBackgroundScheduler;
- (void)resumeBackgroundScheduler;

@end
