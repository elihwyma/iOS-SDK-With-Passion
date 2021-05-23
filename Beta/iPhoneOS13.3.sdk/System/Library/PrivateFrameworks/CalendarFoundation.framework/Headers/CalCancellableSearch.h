/*
 Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

#import <Foundation/NSObject.h>

@interface CalCancellableSearch : NSObject

{
    CDUnknownBlockType _cancellationBlock;
}

@property (copy, nonatomic) CDUnknownBlockType cancellationBlock;

- (void)cancel;
- (id)initWithCancellationBlock:(CDUnknownBlockType)arg1;

@end
