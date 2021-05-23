/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <EmailFoundation/EFQueueScheduler.h>

@interface EFMainThreadScheduler : EFQueueScheduler

- (id)init;
- (_Bool)prefersImmediateExecution;

@end
