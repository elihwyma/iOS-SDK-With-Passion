/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSObject.h>

@interface VSWeakForwardingTarget : NSObject

{
    id _object;
}

@property (weak, nonatomic) id object;

- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;

@end
