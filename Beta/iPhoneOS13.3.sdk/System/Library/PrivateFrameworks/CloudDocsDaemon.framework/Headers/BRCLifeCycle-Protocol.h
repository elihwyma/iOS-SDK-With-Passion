/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudDocsDaemon/Swift-Protocol.h>

@protocol BRCLifeCycle <Swift>

@property (nonatomic, readonly) _Bool isCancelled;

- (unsigned short)close;
- (unsigned short)cancel;
- (unsigned short)resume;

@end
