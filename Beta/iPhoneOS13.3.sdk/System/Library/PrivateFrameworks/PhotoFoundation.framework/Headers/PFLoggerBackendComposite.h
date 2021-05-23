/*
 Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

#import <PhotoFoundation/PFLoggerBackendAdapter.h>

@class NSArray;

@interface PFLoggerBackendComposite : PFLoggerBackendAdapter

{
    _Bool _allBackendsAllowConcurrentAccess;
    NSArray *_backends;
}

@property (retain) NSArray *backends;
@property _Bool allBackendsAllowConcurrentAccess;

- (void)flushWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithBackends:(id)arg1;
- (_Bool)allowsConcurrentAccess;
- (void)logFromCodeLocation:(CDStruct_98c8119d)arg1 facility:(id)arg2 subsystem:(id)arg3 level:(int)arg4 message:(id)arg5 format:(id)arg6 args:(char *)arg7;

@end
