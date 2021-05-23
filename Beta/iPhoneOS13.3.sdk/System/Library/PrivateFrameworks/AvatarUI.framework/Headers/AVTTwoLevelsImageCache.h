/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol AVTImageCache;

@interface AVTTwoLevelsImageCache : NSObject

{
    id <AVTImageCache> _firstLevelCache;
    id <AVTImageCache> _secondLevelCache;
}

@property (nonatomic, readonly) id <AVTImageCache> firstLevelCache;
@property (nonatomic, readonly) id <AVTImageCache> secondLevelCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithFirstLevelCache:(id)arg1 secondLevelCache:(id)arg2 environment:(id)arg3;
- (id)resourceForItem:(id)arg1 scope:(id)arg2;
- (id)resourceForItem:(id)arg1 scope:(id)arg2 cacheMissHandler:(CDUnknownBlockType)arg3;
- (id)imageForItem:(id)arg1 scope:(id)arg2;
- (id)imageForItem:(id)arg1 scope:(id)arg2 cacheMissHandler:(CDUnknownBlockType)arg3;

@end
