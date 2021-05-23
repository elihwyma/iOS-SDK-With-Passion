/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSIndexPath, NSString;

__attribute__((visibility("hidden")))
@interface _UIFocusFastScrollingIndexBarEntry : NSObject

{
    _Bool _isPlaceholder;
    _Bool _hasCachedContentOffset;
    struct CGPoint _cachedContentOffset;
    CDUnknownBlockType _contentOffsetGenerator;
    NSString *_title;
    NSIndexPath *_targetFocusedIndexPath;
}

@property (copy, nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) struct CGPoint contentOffset;
@property (nonatomic, readonly, getter=isPlaceholder) _Bool placeholder;
@property (copy, nonatomic) NSIndexPath *targetFocusedIndexPath;

+ (id)entryWithTitle:(id)arg1 generator:(CDUnknownBlockType)arg2;
+ (id)placeholderEntryWithEntryBefore:(id)arg1 after:(id)arg2;
+ (id)entryWithTitle:(id)arg1 contentOffset:(struct CGPoint)arg2;

- (id)description;
- (id)initWithTitle:(id)arg1 contentOffset:(struct CGPoint)arg2;
- (id)initWithTitle:(id)arg1 generator:(CDUnknownBlockType)arg2;

@end
