/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <Foundation/NSObject.h>

@class CUIRenditionKey, NSString;

@interface CUIRenditionLayerReference : NSObject

{
    struct CGRect _frame;
    NSString *_layerName;
    double _opacity;
    int _blendMode;
    _Bool _fixedFrame;
    _Bool _makeOpaqueIfPossible;
    CUIRenditionKey *_referenceKey;
}

@property (nonatomic) struct CGRect frame;
@property (copy, nonatomic) NSString *layerName;
@property (nonatomic) double opacity;
@property (nonatomic) int blendMode;
@property (nonatomic) _Bool fixedFrame;
@property (nonatomic) _Bool makeOpaqueIfPossible;
@property (retain, nonatomic) CUIRenditionKey *referenceKey;

- (id)init;
- (void)dealloc;

@end
