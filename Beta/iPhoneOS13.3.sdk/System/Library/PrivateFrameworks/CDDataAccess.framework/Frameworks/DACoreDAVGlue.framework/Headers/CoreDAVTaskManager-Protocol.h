/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACoreDAVGlue.framework/DACoreDAVGlue
 */

#import <DACoreDAVGlue/Swift-Protocol.h>

@class NSRunLoop;

@protocol CoreDAVTaskManager <Swift>

@property (retain, nonatomic) NSRunLoop *workRunLoop;

- (unsigned short)shutdown;
- (unsigned short)submitIndependentCoreDAVTask: /* Error: Ran out of types for this method. */;
- (unsigned short)submitQueuedCoreDAVTask: /* Error: Ran out of types for this method. */;
- (unsigned short)coreDAVTaskRequestModal: /* Error: Ran out of types for this method. */;
- (unsigned short)coreDAVTaskEndModal: /* Error: Ran out of types for this method. */;
- (unsigned short)coreDAVTaskDidFinish: /* Error: Ran out of types for this method. */;

@end
