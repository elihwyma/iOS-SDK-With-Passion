/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface OKSettingsTransaction : NSObject

{
    NSMutableArray *_items;
    NSMutableDictionary *_itemsByKey;
}

@property (retain, nonatomic, readonly) NSArray *items;

- (id)init;
- (void)dealloc;
- (void)mergeWithTransaction:(id)arg1;
- (void)registerTransactionItem:(id)arg1;
- (void)registerUpdateBlock:(CDUnknownBlockType)arg1 forKey:(id)arg2;

@end
