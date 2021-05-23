/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface PUCollectionViewData : NSObject

{
    long long _cachedPageCount;
    struct CGRect _currentContentBounds;
    NSMutableArray *_itemLayoutAttributes;
    NSMutableDictionary *_itemLayoutAttributesByIndexPath;
}

@property (nonatomic, readonly) long long cachedPageCount;
@property (nonatomic) struct CGRect currentContentBounds;
@property (nonatomic, readonly) NSMutableArray *itemLayoutAttributes;
@property (nonatomic, readonly) NSMutableDictionary *itemLayoutAttributesByIndexPath;

- (id)init;
- (void)invalidate;
- (_Bool)hasReferenceIndexPath;

@end
