/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@protocol AMSMetricsFlushStrategy

@property (nonatomic, readonly) _Bool cancelled;

- (unsigned short)cancel;
- (unsigned short)performFlush;

@end
