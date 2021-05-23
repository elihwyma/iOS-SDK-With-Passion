/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSNotification.h>

@class PLChangeNotificationCenter;

@interface PLChangeNotification : NSNotification

@property (nonatomic, readonly) PLChangeNotificationCenter *changeNotificationCenter;

+ (id)notificationWithName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;

- (void)_calculateDiffs;

@end
