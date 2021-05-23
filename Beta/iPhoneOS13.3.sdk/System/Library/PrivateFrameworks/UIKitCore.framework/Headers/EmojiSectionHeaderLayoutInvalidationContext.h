/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UICollectionViewFlowLayoutInvalidationContext.h>

@class NSIndexSet, NSMutableIndexSet;

__attribute__((visibility("hidden")))
@interface EmojiSectionHeaderLayoutInvalidationContext : UICollectionViewFlowLayoutInvalidationContext

{
    NSMutableIndexSet *_invalidatedSections;
    struct __CFDictionary *_headerWidthDict;
}

@property (nonatomic, readonly) NSIndexSet *invalidatedSections;

- (void)dealloc;
- (double)preferredWidthForHeaderInSection:(long long)arg1;

@end
