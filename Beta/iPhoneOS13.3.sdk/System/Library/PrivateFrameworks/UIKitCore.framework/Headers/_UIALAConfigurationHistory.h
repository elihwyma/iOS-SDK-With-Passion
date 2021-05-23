/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UILAConfigurationHistory.h>

@class NSSet, NSString;

__attribute__((visibility("hidden")))
@interface _UIALAConfigurationHistory : _UILAConfigurationHistory

{
    _Bool _hasEstablishedAlignmentValues;
    _Bool _inAlignmentLayoutUpdateSection;
    unsigned long long _alignment;
}

@property (nonatomic) _Bool hasEstablishedAlignmentValues;
@property (nonatomic, getter=isInAlignmentLayoutUpdateSection) _Bool inAlignmentLayoutUpdateSection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) long long axis;
@property (nonatomic) _Bool layoutFillsCanvas;
@property (nonatomic) _Bool layoutUsesCanvasMarginsWhenFilling;
@property (nonatomic, readonly) NSSet *_newlyHiddenItems;
@property (nonatomic, readonly) NSSet *_newlyUnhiddenItems;
@property (nonatomic, readonly) NSSet *invalidBaselineConstraints;
@property (nonatomic) unsigned long long alignment;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
