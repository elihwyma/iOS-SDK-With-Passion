/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@interface SXDelayed : NSObject

{
    _Bool _cancelled;
    CDUnknownBlockType _block;
}

@property (copy, nonatomic) CDUnknownBlockType block;
@property (nonatomic) _Bool cancelled;

+ (id)execute:(CDUnknownBlockType)arg1 delay:(double)arg2;

- (void)invoke;
- (void)cancel;
- (id)initWithBlock:(CDUnknownBlockType)arg1 delay:(double)arg2;

@end
