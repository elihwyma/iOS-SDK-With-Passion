/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OKMediaManagerDelegate;

@interface OKMediaManager : NSObject

{
    id <OKMediaManagerDelegate> _delegate;
    NSMutableDictionary *_mediaSourcesByScheme;
}

@property (nonatomic) id <OKMediaManagerDelegate> delegate;

+ (id)defaultManager;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mediaItemForURL:(id)arg1;
- (id)mediaURLsForMediaObjects:(id)arg1;
- (id)mediaURLForMediaObject:(id)arg1;
- (id)mediaItemsForURLs:(id)arg1;
- (void)addMediaItemClass:(Class)arg1;
- (Class)mediaItemClassForURL:(id)arg1;
- (void)removeMediaItemClass:(Class)arg1;

@end
