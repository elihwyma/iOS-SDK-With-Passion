/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface SKUIImagePlaceholder : NSObject

{
    UIColor *_backgroundColor;
    UIColor *_borderColor;
    double _borderWidth;
    CDUnknownBlockType _cornerPathBlock;
}

@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) UIColor *borderColor;
@property (nonatomic, readonly) double borderWidth;
@property (copy, nonatomic, readonly) CDUnknownBlockType cornerPathBlock;

- (id)initWithBackgroundColor:(id)arg1 borderColor:(id)arg2 borderWidth:(double)arg3 cornerRadius:(double)arg4;
- (id)initWithBackgroundColor:(id)arg1 borderColor:(id)arg2 borderWidth:(double)arg3 cornerPathBlock:(CDUnknownBlockType)arg4;

@end
