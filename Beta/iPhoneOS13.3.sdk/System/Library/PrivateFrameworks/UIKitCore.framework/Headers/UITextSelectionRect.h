/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UITextSelectionRectImpl;

@interface UITextSelectionRect : NSObject

@property (nonatomic, readonly, getter=_isImpl) UITextSelectionRectImpl *isImpl;
@property (nonatomic, readonly) _Bool _drawsOwnHighlight;
@property (nonatomic, readonly) struct CGRect rect;
@property (nonatomic, readonly) long long writingDirection;
@property (nonatomic, readonly) _Bool containsStart;
@property (nonatomic, readonly) _Bool containsEnd;
@property (nonatomic, readonly) _Bool isVertical;

+ (_Bool)startIsHorizontal:(id)arg1;
+ (id)startRectFromRects:(id)arg1;
+ (id)endRectFromRects:(id)arg1;
+ (struct CGRect)startEdgeFromRects:(id)arg1;
+ (struct CGRect)endEdgeFromRects:(id)arg1;
+ (_Bool)endIsHorizontal:(id)arg1;

- (id)range;

@end
