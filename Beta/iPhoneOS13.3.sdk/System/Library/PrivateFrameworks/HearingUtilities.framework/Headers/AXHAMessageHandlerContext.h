/*
 Image: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
 */

#import <NSObject.h>

@interface AXHAMessageHandlerContext : NSObject

{
    id _target;
    CDUnknownBlockType _block;
}

@property (nonatomic, readonly) id target;
@property (nonatomic, readonly) CDUnknownBlockType block;

- (id)initWithTarget:(id)arg1 block:(CDUnknownBlockType)arg2;

@end
