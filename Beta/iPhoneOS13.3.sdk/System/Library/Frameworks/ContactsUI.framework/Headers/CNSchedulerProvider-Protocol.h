/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/Swift-Protocol.h>

@protocol CNScheduler;

@protocol CNSchedulerProvider <Swift>

@property (nonatomic, readonly) id <CNScheduler> backgroundScheduler;
@property (nonatomic, readonly) id <CNScheduler> mainThreadScheduler;
@property (nonatomic, readonly) id <CNScheduler> inlineScheduler;
@property (nonatomic, readonly) id <CNScheduler> immediateScheduler;

- (unsigned short)newSerialSchedulerWithName: /* Error: Ran out of types for this method. */;
- (unsigned short)newSynchronousSerialSchedulerWithName: /* Error: Ran out of types for this method. */;
- (unsigned short)backgroundSchedulerWithQualityOfService: /* Error: Ran out of types for this method. */;
- (unsigned short)newReaderWriterSchedulerWithName: /* Error: Ran out of types for this method. */;

@end
