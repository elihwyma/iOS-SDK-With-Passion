/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

#import <AvatarUI/Swift-Protocol.h>

@class NSString;

@interface AVTPassThroughResourceCache : NSObject <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)clearCache;
- (id)resourceForItem:(id)arg1 scope:(id)arg2;
- (id)resourceForItem:(id)arg1 scope:(id)arg2 cacheMissHandler:(CDUnknownBlockType)arg3;
- (id)imageForItem:(id)arg1 scope:(id)arg2;
- (id)imageForItem:(id)arg1 scope:(id)arg2 cacheMissHandler:(CDUnknownBlockType)arg3;

@end
