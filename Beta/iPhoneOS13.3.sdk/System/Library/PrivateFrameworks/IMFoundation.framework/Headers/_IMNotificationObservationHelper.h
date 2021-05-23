/*
 Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _IMNotificationObservationHelper : NSObject

{
    id _observer;
    id _object;
    CDUnknownBlockType _block;
    NSString *_name;
}

- (void)dealloc;
- (void)_notification:(id)arg1;
- (id)initWithObserver:(id)arg1 name:(id)arg2 object:(id)arg3 block:(CDUnknownBlockType)arg4;

@end
