/*
 Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

#import <Catalyst/CATTaskOperation.h>

__attribute__((visibility("hidden")))
@interface _CATLongRunningTaskOperation : CATTaskOperation

- (void)cancel;
- (void)main;
- (_Bool)isAsynchronous;

@end
