/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _EFDefaultQueueingStrategy : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *descriptionType;

- (void)enqueueObject:(id)arg1 replaceIfExists:(_Bool)arg2 buffer:(id)arg3;
- (void)dequeueObject:(id)arg1 buffer:(id)arg2;

@end
