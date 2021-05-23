/*
 Image: /System/Library/PrivateFrameworks/ProactiveMagicalMoments.framework/ProactiveMagicalMoments
 */

#import <Foundation/NSObject.h>

@interface PMMPredictionNotification : NSObject

{
    id _notificationToken;
}

+ (void)postPredictionUpdate:(id)arg1 consumer:(unsigned long long)arg2;

- (id)init;
- (void)dealloc;
- (id)initWithPredictionUpdateListener:(CDUnknownBlockType)arg1;

@end
