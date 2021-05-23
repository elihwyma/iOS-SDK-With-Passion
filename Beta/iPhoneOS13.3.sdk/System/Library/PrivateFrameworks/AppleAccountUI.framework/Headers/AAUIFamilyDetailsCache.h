/*
 Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

#import <Foundation/NSObject.h>

@interface AAUIFamilyDetailsCache : NSObject

@property (nonatomic, readonly) unsigned long long pendingInviteCount;

+ (id)sharedCache;

- (void)invalidate;

@end
