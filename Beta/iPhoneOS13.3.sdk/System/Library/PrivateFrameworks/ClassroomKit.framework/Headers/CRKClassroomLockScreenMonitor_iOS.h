/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CRKClassroomLockScreenMonitor_iOS : NSObject

{
    int mDidAppearObserver;
    int mDidDismissObserver;
    _Bool _classroomLockScreenVisible;
}

@property (nonatomic, getter=isClassroomLockScreenVisible) _Bool classroomLockScreenVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedMonitor;

- (id)init;
- (void)dealloc;
- (void)startObserving;
- (void)endObserving;
- (void)displayClassroomLockScreenWithLabel:(id)arg1 passcode:(id)arg2;
- (void)dismissClassroomLockScreen;

@end
