/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class NSNotificationCenter, NSString;

@interface AVTAvatarRecordCacheableResourceChangeToken : NSObject

{
    NSString *_recordID;
    CDUnknownBlockType _changeHandler;
    NSNotificationCenter *_notificationCenter;
}

@property (copy, nonatomic, readonly) NSString *recordID;
@property (copy, nonatomic, readonly) CDUnknownBlockType changeHandler;
@property (nonatomic, readonly) NSNotificationCenter *notificationCenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)handleNotification:(id)arg1;
- (void)startObservingChanges;
- (void)stopObservingChanges;
- (id)initWithEnvironment:(id)arg1 recordIdentifier:(id)arg2 changeHandler:(CDUnknownBlockType)arg3;

@end
