/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString, SXTextExclusionPathWrapper, UIBezierPath;

@protocol TSDWrappable;

@interface SXTextExclusionPath : NSObject

{
    _Bool _fullBleed;
    int _type;
    int _lineVerticalAlignment;
    double _padding;
    double _verticalAlignmentFactor;
    NSString *_componentIdentifier;
    CDUnknownBlockType _startBlock;
    CDUnknownBlockType _minYBlock;
    CDUnknownBlockType _completionBlock;
    SXTextExclusionPathWrapper *_wrapper;
    struct CGPoint _actualPosition;
    struct CGPoint _position;
    struct CGPoint _anchorPoint;
    struct _NSRange _range;
    struct UIEdgeInsets _insets;
    struct CGRect _exclusionRect;
}

@property (nonatomic, readonly) SXTextExclusionPathWrapper *wrapper;
@property (nonatomic) struct CGPoint actualPosition;
@property (nonatomic) struct CGRect exclusionRect;
@property (nonatomic, readonly) int type;
@property (nonatomic, readonly) struct CGPoint position;
@property (nonatomic, readonly) struct CGPoint anchorPoint;
@property (nonatomic) struct _NSRange range;
@property (nonatomic, readonly) UIBezierPath *path;
@property (nonatomic, readonly) id <TSDWrappable> wrappable;
@property (nonatomic) double padding;
@property (nonatomic) double verticalAlignmentFactor;
@property (nonatomic) int lineVerticalAlignment;
@property (nonatomic, readonly) struct UIEdgeInsets insets;
@property (nonatomic) _Bool fullBleed;
@property (retain, nonatomic) NSString *componentIdentifier;
@property (copy, nonatomic) CDUnknownBlockType startBlock;
@property (copy, nonatomic) CDUnknownBlockType minYBlock;
@property (copy, nonatomic) CDUnknownBlockType completionBlock;

- (id)description;
- (id)initWithTextRange:(struct _NSRange)arg1 position:(struct CGPoint)arg2 rect:(struct CGRect)arg3 withInsets:(struct UIEdgeInsets)arg4;
- (void)adjustYPositionWithCurrentPosition:(struct CGPoint)arg1;
- (void)callStartBlock;
- (void)callCompletionBlock;

@end
