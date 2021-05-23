/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <QuickLook/QLItemFetcher.h>

@class NSString, QLSpotlightSearchableItemInfo;

__attribute__((visibility("hidden")))
@interface QLSpotlightFetcher : QLItemFetcher

{
    NSString *_searchableItemUniqueIdentifier;
    NSString *_queryString;
    NSString *_applicationBundleIdentifier;
    QLSpotlightSearchableItemInfo *_info;
}

@property (readonly) QLSpotlightSearchableItemInfo *info;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)itemSize;
- (_Bool)isLongFetchOperation;
- (void)fetchContentWithAllowedOutputClasses:(id)arg1 inQueue:(id)arg2 updateBlock:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)initWithSearchableItemUniqueIdentifier:(id)arg1 queryString:(id)arg2 applicationBundleIdentifier:(id)arg3;

@end
