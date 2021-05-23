/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface _UIImageContentLayout : NSObject

{
    struct {
        unsigned int contentsIsGenerator:1;
        unsigned int contentsIsCGImage:1;
        unsigned int rendersContentAtNaturalSize:1;
    } _flags;
    id _contents;
    UIColor *_contentsMultiplyColor;
    double _contentsScaleFactor;
    double _baselineOffsetFromTop;
    double _baselineOffsetFromBottom;
    struct UIEdgeInsets _contentInsets;
    struct CGAffineTransform _contentsTransform;
}

@property (nonatomic, readonly) struct CGAffineTransform contentsTransform;
@property (nonatomic, readonly) double contentsScaleFactor;
@property (nonatomic, readonly) id contents;
@property (nonatomic, readonly) struct UIEdgeInsets contentInsets;
@property (nonatomic, readonly) UIColor *contentsMultiplyColor;
@property (nonatomic, readonly) double baselineOffsetFromTop;
@property (nonatomic, readonly) double baselineOffsetFromBottom;

+ (id)layoutForSource:(id)arg1 inTarget:(id)arg2 withSize:(struct CGSize)arg3;

- (id)description;
- (_Bool)hasContents;
- (_Bool)hasCGImageContents;
- (struct CGImage *)CGImageContents;
- (id)initWithSource:(id)arg1 target:(id)arg2 withSize:(struct CGSize)arg3;
- (void)_prepareContentOfSize:(struct CGSize)arg1 source:(id)arg2 target:(id)arg3;
- (void)_materializeContentsIfNeeded;
- (_Bool)rendersContentsAtNaturalSize;

@end
