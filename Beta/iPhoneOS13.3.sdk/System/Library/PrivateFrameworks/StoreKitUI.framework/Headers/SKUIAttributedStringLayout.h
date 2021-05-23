/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSAttributedString, NSShadow, NSString, NSStringDrawingContext;

__attribute__((visibility("hidden")))
@interface SKUIAttributedStringLayout : NSObject

{
    NSAttributedString *_attributedString;
    struct CGSize _boundingSize;
    NSStringDrawingContext *_context;
    double _topInset;
    _Bool _usesTallCharacterSet;
    struct UIEdgeInsets _edgeInsetsForShadow;
    NSShadow *_shadow;
}

@property (nonatomic, readonly) NSAttributedString *attributedString;
@property (nonatomic, readonly) double baselineOffset;
@property (nonatomic, readonly) double firstBaselineOffset;
@property (nonatomic, readonly) struct CGSize boundingSize;
@property (nonatomic, readonly) long long numberOfLines;
@property (nonatomic, readonly) NSStringDrawingContext *stringDrawingContext;
@property (nonatomic, readonly) double topInset;
@property (nonatomic, readonly) _Bool usesTallCharacterSet;
@property (nonatomic, readonly) struct UIEdgeInsets edgeInsetsForShadow;
@property (nonatomic, readonly) NSShadow *shadow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithLayoutRequest:(id)arg1;

@end
