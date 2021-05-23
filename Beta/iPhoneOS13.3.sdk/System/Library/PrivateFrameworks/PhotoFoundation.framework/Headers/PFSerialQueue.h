/*
 Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

#import <PhotoFoundation/PFDispatchQueue.h>

@interface PFSerialQueue : PFDispatchQueue

+ (Class)concreteQueueClass;
+ (id)_newQueueWithLabel:(id)arg1 qos:(unsigned int)arg2 targetQueue:(id)arg3;

@end
