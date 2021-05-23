/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _MTLObjectWithLabel : NSObject

{
    NSString *_label;
    struct os_unfair_lock_s _labelLock;
}

@property (copy) NSString *label;

- (id)init;
- (void)dealloc;
- (id)retainedLabel;

@end
