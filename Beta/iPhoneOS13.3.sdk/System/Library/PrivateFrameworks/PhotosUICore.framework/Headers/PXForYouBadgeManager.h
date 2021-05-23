/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXObservable.h>

@class NSString;

@interface PXForYouBadgeManager : PXObservable

{
    unsigned long long _unreadBadgeCount;
}

@property (nonatomic, readonly) unsigned long long unreadBadgeCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)setLastSeenBadgeDate:(id)arg1;
+ (id)lastSeenBadgeDate;

- (void)dealloc;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)startListeningForChanges;
- (id)mutableChangeObject;
- (void)_stopListeningForChanges;
- (void)_didFinishPostingNotifications:(id)arg1;
- (void)setUnreadBadgeCount:(unsigned long long)arg1;
- (void)_updateUnreadCount;

@end
