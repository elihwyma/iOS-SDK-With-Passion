/*
 Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

#import <Foundation/NSObject.h>

@class MPUMutableFontDescriptor, NSMutableArray;

@interface MPUFontDescriptorCache : NSObject

{
    MPUMutableFontDescriptor *_reusableMutableFontDescriptor;
    unsigned long long _maximumCapacity;
    NSMutableArray *_orderedCachedFontDescriptors;
}

+ (id)sharedFontDescriptorCache;

- (id)init;
- (void)dealloc;
- (void)_handleContentSizeCategoryDidChangeNotification:(id)arg1;
- (id)cachedImmutableFontDescriptorForConfigurationBlock:(CDUnknownBlockType)arg1;
- (id)cachedImmutableFontDescriptorMatchingMutableFontDescriptor:(id)arg1;
- (id)_cachedImmutableFontDescriptorMatchingMutableFontDescriptor:(id)arg1;

@end
