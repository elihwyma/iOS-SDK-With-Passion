/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSCoder.h>

@class UIStoryboardDecodingContext;

@interface NSCoder (UIGeometryKeyedCoding)

@property (nonatomic, readonly) UIStoryboardDecodingContext *_storyboardDecodingContext;

- (void)encodeCGPoint:(struct CGPoint)arg1 forKey:(id)arg2;
- (void)encodeCGSize:(struct CGSize)arg1 forKey:(id)arg2;
- (void)encodeCGRect:(struct CGRect)arg1 forKey:(id)arg2;
- (struct CGPoint)decodeCGPointForKey:(id)arg1;
- (struct CGSize)decodeCGSizeForKey:(id)arg1;
- (struct CGRect)decodeCGRectForKey:(id)arg1;
- (struct CGAffineTransform)decodeCGAffineTransformForKey:(id)arg1;
- (struct UIEdgeInsets)decodeUIEdgeInsetsForKey:(id)arg1;
- (void)encodeCGAffineTransform:(struct CGAffineTransform)arg1 forKey:(id)arg2;
- (void)encodeUIEdgeInsets:(struct UIEdgeInsets)arg1 forKey:(id)arg2;
- (void)encodeCGVector:(struct CGVector)arg1 forKey:(id)arg2;
- (struct CGVector)decodeCGVectorForKey:(id)arg1;
- (struct UIOffset)decodeUIOffsetForKey:(id)arg1;
- (void)encodeUIOffset:(struct UIOffset)arg1 forKey:(id)arg2;
- (void)_initializeClassSwapperWithCurrentDecodingViewControllerIfNeeded:(id)arg1;
- (id)_decodeObjectsAndTrackChildViewControllerIndexWithParent:(id)arg1 forKey:(id)arg2;
- (void)encodeDirectionalEdgeInsets:(struct NSDirectionalEdgeInsets)arg1 forKey:(id)arg2;
- (struct NSDirectionalEdgeInsets)decodeDirectionalEdgeInsetsForKey:(id)arg1;
- (_Bool)_ui_isInterprocess;
- (void)_createStoryboardDecodingContextIfNeeded;
- (id)_decodeObjectsWithSourceSegueTemplate:(id)arg1 creator:(CDUnknownBlockType)arg2 sender:(id)arg3 forKey:(id)arg4;
- (id)_ui_decodeTextAttributesForKey:(id)arg1;
- (void)_ui_encodeTextAttributes:(id)arg1 forKey:(id)arg2;

@end
