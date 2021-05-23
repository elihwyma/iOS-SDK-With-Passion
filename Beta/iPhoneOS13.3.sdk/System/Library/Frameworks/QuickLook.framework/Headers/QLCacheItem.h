/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <NSObject.h>

@class NSMutableArray, QLItem;

__attribute__((visibility("hidden")))
@interface QLCacheItem : NSObject

{
    NSMutableArray *_handlers;
    QLItem *_item;
}

@property (retain, nonatomic) QLItem *item;

- (void)invalidate;
- (void)addCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_performHandlers;

@end
