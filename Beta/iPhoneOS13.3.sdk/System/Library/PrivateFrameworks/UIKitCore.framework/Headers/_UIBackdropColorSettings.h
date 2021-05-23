/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIColor, _UIBackdropViewSettings;

@interface _UIBackdropColorSettings : NSObject

{
    _Bool _hasObservedValues;
    _UIBackdropViewSettings *_parentSettings;
}

@property (nonatomic) _UIBackdropViewSettings *parentSettings;
@property (nonatomic) _Bool hasObservedValues;
@property (nonatomic) double averageHue;
@property (nonatomic) double averageSaturation;
@property (nonatomic) double averageBrightness;
@property (nonatomic) double contrast;
@property (nonatomic, readonly) UIColor *color;

- (void)setDefaultValues;
- (void)setValuesFromModel:(id)arg1;
- (_Bool)applyCABackdropLayerStatistics:(id)arg1;

@end
