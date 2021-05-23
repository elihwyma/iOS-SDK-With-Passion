/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACoreDAVGlue.framework/DACoreDAVGlue
 */

#import <CoreDAV/CoreDAVTask.h>

@class NSString;

@interface CoreDAVTask (DACoreDAVGlueExtensions)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)finishWithError:(id)arg1;
- (void)performTask;
- (void)cancelTaskWithReason:(int)arg1 underlyingError:(id)arg2;

@end
