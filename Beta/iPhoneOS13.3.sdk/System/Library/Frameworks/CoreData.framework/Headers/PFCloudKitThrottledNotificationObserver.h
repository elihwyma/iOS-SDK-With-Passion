/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PFCloudKitThrottledNotificationObserver : NSObject

{
    _Atomic int _notificationIteration;
    NSString *_assertionLabel;
    NSString *_label;
    long long _notificationStalenessInterval;
    CDUnknownBlockType _notificationHandlerBlock;
}

@property (retain, nonatomic) NSString *label;
@property (nonatomic) long long notificationStalenessInterval;
@property (copy, nonatomic) CDUnknownBlockType notificationHandlerBlock;

- (void)dealloc;
- (id)initWithLabel:(id)arg1;
- (void)noteRecievedNotification:(id)arg1;

@end
