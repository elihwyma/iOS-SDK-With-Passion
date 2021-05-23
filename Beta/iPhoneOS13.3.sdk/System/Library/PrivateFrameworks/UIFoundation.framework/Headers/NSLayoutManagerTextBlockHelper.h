/*
 Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <Foundation/NSObject.h>

@class NSTextBlock;

@interface NSLayoutManagerTextBlockHelper : NSObject

{
    NSTextBlock *_block;
    struct CGRect _layoutRect;
    struct CGRect _boundsRect;
}

- (void)dealloc;
- (id)initWithTextBlock:(id)arg1 layoutRect:(struct CGRect)arg2 boundsRect:(struct CGRect)arg3;

@end
