/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface PUSectionedGridLayoutData : NSObject

{
    long long _numberOfPagesToCache;
    struct CGRect _currentContentBounds;
    NSMutableArray *_headerLayoutAttributes;
    NSMutableDictionary *_headerLayoutAttributesByVisualSection;
}

@property (nonatomic, readonly) long long numberOfPagesToCache;
@property (nonatomic) struct CGRect currentContentBounds;
@property (nonatomic, readonly) NSMutableArray *headerLayoutAttributes;
@property (nonatomic, readonly) NSMutableDictionary *headerLayoutAttributesByVisualSection;

- (id)init;
- (void)invalidate;

@end
