/*
 Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

#import <Foundation/NSObject.h>

@interface _PFPriorityQueueExtensionBlockInfo : NSObject

{
    unsigned int _qos;
    CDUnknownBlockType _block;
    unsigned long long _priority;
}

@property (readonly) CDUnknownBlockType block;
@property (readonly) unsigned int qos;
@property (readonly) unsigned long long priority;

- (id)initWithPriority:(unsigned long long)arg1 qos:(unsigned int)arg2 block:(CDUnknownBlockType)arg3;

@end
