/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
 */

#import <NSObject.h>

@class OFLRUCache;

@interface OFMetadataMemoryCache : NSObject

{
    OFLRUCache *_memoryCache;
    _Bool _allowCleanupOnMemoryWarnings;
    _Bool _allowCleanupOnEnteringBackground;
    unsigned long long _hasChanges;
}

@property (nonatomic) _Bool allowCleanupOnMemoryWarnings;
@property (nonatomic) _Bool allowCleanupOnEnteringBackground;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (_Bool)hasChanges;
- (_Bool)writeToURL:(id)arg1;
- (_Bool)loadFromURL:(id)arg1;
- (id)attributesForIdentifier:(id)arg1;
- (void)_didReceiveMemoryWarningNotification;
- (void)_didEnterBackgroundNotification;
- (id)_metadataForIdentifier:(id)arg1;
- (void)_saveMetadata:(id)arg1 forIdentifier:(id)arg2;
- (void)setNumberOfMemorySlots:(unsigned long long)arg1;
- (id)valueForKey:(id)arg1 andIdentifier:(id)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2 andIdentifier:(id)arg3;
- (void)setAttributes:(id)arg1 forIdentifier:(id)arg2;
- (void)resetChanges;
- (unsigned long long)numberOfMemorySlots;
- (unsigned long long)numberOfUsedMemorySlots;
- (void)invalidateForIdentifier:(id)arg1;

@end
