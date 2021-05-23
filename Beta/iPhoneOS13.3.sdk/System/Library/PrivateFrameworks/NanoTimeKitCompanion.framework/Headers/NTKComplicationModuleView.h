/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKModuleView.h>

#import <NanoTimeKitCompanion/Swift-Protocol.h>

@class NSString;

@protocol NTKComplicationDisplayObserver;

@interface NTKComplicationModuleView : NTKModuleView <Swift>

{
    _Bool canUseCurvedText;
    _Bool _isXL;
    id <NTKComplicationDisplayObserver> displayObserver;
}

@property (nonatomic) _Bool isXL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <NTKComplicationDisplayObserver> displayObserver;
@property (nonatomic) _Bool canUseCurvedText;
@property (nonatomic, getter=isHighlighted) _Bool highlighted;
@property (nonatomic) _Bool shouldUseTemplateColors;

+ (id)smallModuleViewForComplicationType:(unsigned long long)arg1;
+ (id)_modularSmallStopwatchImageProvider;
+ (id)_extraLargeStopwatchImageProvider;
+ (id)largeModuleViewForComplicationType:(unsigned long long)arg1;
+ (id)_modularSmallAlarmImageProvider;
+ (id)_extraLargeAlarmImageProvider;
+ (id)_modularSmallTimerImageProvider;
+ (id)_extraLargeTimerImageProvider;

- (id)_newLabelSubviewWithFont:(id)arg1;
- (id)_newLabelSubview;
- (void)_setTypographicTracking:(double)arg1 andFont:(id)arg2 onAttributedString:(id *)arg3 inRange:(struct _NSRange)arg4;
- (id)_newImageViewSubview;
- (id)_attributeEnDashesWithinString:(id)arg1 typographicTracking:(double)arg2 baseFont:(id)arg3;
- (id)_attributedStringWithText:(id)arg1 typographicTracking:(double)arg2 baseFont:(id)arg3;

@end
