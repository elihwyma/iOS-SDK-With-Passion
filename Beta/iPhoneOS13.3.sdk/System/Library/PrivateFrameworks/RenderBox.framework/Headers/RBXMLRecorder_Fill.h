/*
 Image: /System/Library/PrivateFrameworks/RenderBox.framework/RenderBox
 */

#import <RenderBox/RBFill.h>

__attribute__((visibility("hidden")))
@interface RBXMLRecorder_Fill : RBFill

{
    struct vector<std::__1::pair<const char *, RB::refcounted_ptr<RB::XMLRecorder::AttrValue>>, std::__1::allocator<std::__1::pair<const char *, RB::refcounted_ptr<RB::XMLRecorder::AttrValue>>>> _attributes;
}

- (id).cxx_construct;
- (void)setColor:(CDStruct_0b1c536a)arg1;
- (void)setRBImage:(CDStruct_27041886)arg1 transform:(struct CGAffineTransform)arg2 interpolation:(int)arg3 tintColor:(CDStruct_0b1c536a)arg4 flags:(unsigned int)arg5;
- (void)setTiledRBImage:(CDStruct_27041886)arg1 transform:(struct CGAffineTransform)arg2 sourceRect:(struct CGRect)arg3 interpolation:(int)arg4 tintColor:(CDStruct_0b1c536a)arg5 flags:(unsigned int)arg6;
- (void)set9PartRBImage:(CDStruct_27041886)arg1 transform:(struct CGAffineTransform)arg2 destinationRect:(struct CGRect)arg3 capInsets:(CDStruct_d2b197d1)arg4 repeat:(_Bool)arg5 interpolation:(int)arg6 tintColor:(CDStruct_0b1c536a)arg7 flags:(unsigned int)arg8;
- (void)setAxialGradientStartPoint:(struct CGPoint)arg1 endPoint:(struct CGPoint)arg2 stopCount:(long long)arg3 colors:(const CDStruct_0b1c536a *)arg4 locations:(const double *)arg5 flags:(unsigned int)arg6;
- (void)setRadialGradientCenter:(struct CGPoint)arg1 startRadius:(double)arg2 endRadius:(double)arg3 stopCount:(long long)arg4 colors:(const CDStruct_0b1c536a *)arg5 locations:(const double *)arg6 flags:(unsigned int)arg7;
- (void)setConicGradientCenter:(struct CGPoint)arg1 angle:(double)arg2 stopCount:(long long)arg3 colors:(const CDStruct_0b1c536a *)arg4 locations:(const double *)arg5 flags:(unsigned int)arg6;
- (void)encodeTo:(struct Tree *)arg1;

@end
