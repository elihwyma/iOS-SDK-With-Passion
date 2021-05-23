/*
 Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

#import <Foundation/NSObject.h>

@interface MPUNotificationObserver : NSObject

{
    id _notificationObservationToken;
}

@property (retain, nonatomic) id notificationObservationToken;

+ (id)observerWithName:(id)arg1 object:(id)arg2 queue:(id)arg3 observationHandler:(CDUnknownBlockType)arg4;

- (void)dealloc;
- (id)initWithName:(id)arg1 object:(id)arg2 queue:(id)arg3 observationHandler:(CDUnknownBlockType)arg4;

@end
