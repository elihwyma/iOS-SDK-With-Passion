/*
 Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
 */

#import <Foundation/NSObject.h>

@interface FAFamilyDetailsCache : NSObject

{
    unsigned long long _pendingInviteCount;
    _Bool _isValid;
    _Bool _isValidating;
}

@property (nonatomic, readonly) unsigned long long pendingInviteCount;

+ (id)sharedCache;

- (void)invalidate;
- (void)_fetchPendingInviteCount;
- (void)_setPendingInviteCount:(unsigned long long)arg1;

@end
