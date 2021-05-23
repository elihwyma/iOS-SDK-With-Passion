/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@interface CNVirtualSchedulerJob : NSObject

{
    unsigned long long _time;
    CDUnknownBlockType _block;
}

@property unsigned long long time;
@property (copy, readonly) CDUnknownBlockType block;

+ (id)jobWithTime:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;

- (id)description;
- (id)initWithTime:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;

@end
