/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVPlayerItem;

__attribute__((visibility("hidden")))
@interface AVPlayerQueueModificationDescription : NSObject

{
    long long _modificationType;
    AVPlayerItem *_item;
    AVPlayerItem *_afterItem;
}

@property (nonatomic, readonly) long long modificationType;
@property (nonatomic, readonly) AVPlayerItem *item;
@property (nonatomic, readonly) AVPlayerItem *afterItem;

+ (id)modificationForInsertingItem:(id)arg1 afterItem:(id)arg2;
+ (id)modificationForRemovingItem:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)initWithModificationType:(long long)arg1 item:(id)arg2 afterItem:(id)arg3;

@end
