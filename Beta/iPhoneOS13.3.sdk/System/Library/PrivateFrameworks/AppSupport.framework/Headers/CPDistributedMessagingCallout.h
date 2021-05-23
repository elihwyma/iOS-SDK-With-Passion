/*
 Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import <Foundation/NSObject.h>

@interface CPDistributedMessagingCallout : NSObject

{
    id _target;
    SEL _selector;
    _Bool _returnsVoid;
    _Bool _returnsVoidIsValid;
}

@property (retain, nonatomic, readonly) id target;
@property (nonatomic, readonly) SEL selector;
@property (nonatomic, readonly) _Bool returnsVoid;

- (void)dealloc;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;

@end
