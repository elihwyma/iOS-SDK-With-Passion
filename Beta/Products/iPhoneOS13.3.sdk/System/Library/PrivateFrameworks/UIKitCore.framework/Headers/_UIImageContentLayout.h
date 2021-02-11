/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIImageContentLayout : NSObject {
    double  _baselineOffsetFromBottom;
    double  _baselineOffsetFromTop;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsets;
    id  _contents;
    UIColor * _contentsMultiplyColor;
    double  _contentsScaleFactor;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _contentsTransform;
    struct { 
        unsigned int contentsIsGenerator : 1; 
        unsigned int contentsIsCGImage : 1; 
        unsigned int rendersContentAtNaturalSize : 1; 
    }  _flags;
}

@property (nonatomic, readonly) double baselineOffsetFromBottom;
@property (nonatomic, readonly) double baselineOffsetFromTop;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (nonatomic, readonly) id contents;
@property (nonatomic, readonly) UIColor *contentsMultiplyColor;
@property (nonatomic, readonly) double contentsScaleFactor;
@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } contentsTransform;

+ (id)layoutForSource:(id)arg1 inTarget:(id)arg2 withSize:(struct CGSize { double x1; double x2; })arg3;

- (void).cxx_destruct;
- (struct CGImage { }*)CGImageContents;
- (void)_materializeContentsIfNeeded;
- (void)_prepareContentOfSize:(struct CGSize { double x1; double x2; })arg1 source:(id)arg2 target:(id)arg3;
- (double)baselineOffsetFromBottom;
- (double)baselineOffsetFromTop;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (id)contents;
- (id)contentsMultiplyColor;
- (double)contentsScaleFactor;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })contentsTransform;
- (id)description;
- (bool)hasCGImageContents;
- (bool)hasContents;
- (id)initWithSource:(id)arg1 target:(id)arg2 withSize:(struct CGSize { double x1; double x2; })arg3;
- (bool)rendersContentsAtNaturalSize;

@end