/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString, UICellAccessoryManager;

__attribute__((visibility("hidden")))
@interface UITableCellAccessoryLayout : NSObject

{
    UICellAccessoryManager *_manager;
    unsigned long long _edge;
    double _safeAreaInset;
    double _minimumCompressionLayoutWidth;
    CDUnknownBlockType _spacingBlock;
    NSDictionary *_initialFrames;
    NSDictionary *_finalFrames;
    NSMutableDictionary *_initialAlphas;
    NSMutableDictionary *_finalAlphas;
    struct CGRect _totalFrame;
}

@property (nonatomic) struct CGRect totalFrame;
@property (retain, nonatomic) NSDictionary *initialFrames;
@property (retain, nonatomic) NSDictionary *finalFrames;
@property (retain, nonatomic) NSMutableDictionary *initialAlphas;
@property (retain, nonatomic) NSMutableDictionary *finalAlphas;
@property (copy, nonatomic) CDUnknownBlockType spacingBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) UICellAccessoryManager *manager;
@property (nonatomic) double safeAreaInset;
@property (nonatomic) unsigned long long edge;
@property (nonatomic) double minimumCompressionLayoutWidth;

- (id)init;
- (void)prepareLayoutForAccessories:(id)arg1 previousAccessories:(id)arg2 configurationIdentifier:(id)arg3;
- (struct CGRect)initialFrameForAccessory:(id)arg1;
- (double)initialAlphaForAccessory:(id)arg1;
- (struct CGRect)finalFrameForAccessory:(id)arg1;
- (double)finalAlphaForAccessory:(id)arg1;
- (struct CGRect)endLayout;
- (double)_totalWidthForAccessories:(id)arg1 withContainerSize:(struct CGSize)arg2;
- (struct CGRect)_frameForAccessoryAtIndex:(unsigned long long)arg1 inAccessories:(id)arg2 containerSize:(struct CGSize)arg3 withXOrigin:(double *)arg4;
- (id)_framesForAccessories:(id)arg1 withContainerSize:(struct CGSize)arg2 outTotalFrame:(struct CGRect *)arg3;

@end
