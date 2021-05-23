/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKTimelineEntryModel.h>

@interface NTKDateTimelineEntryModel : NTKTimelineEntryModel

{
    _Bool _lunar;
}

@property (nonatomic) _Bool lunar;

- (id)_newExtraLargeTemplate;
- (id)_newSimpleTextTemplate;
- (id)templateForComplicationFamily:(long long)arg1;
- (id)_newSignatureCornerTemplate;
- (id)_newSignatureCircularTemplate;
- (id)_newModularSmallTemplate;
- (id)_newModularLargeTemplate;
- (id)_newModularSmallLunarTemplate;
- (id)_newModularLargeLunarTemplate;
- (id)_newSmallFlatUtilitarianTemplate;
- (id)_newLargeUtilitarianTemplate;
- (id)_newCircularTemplateMedium:(_Bool)arg1;
- (id)_newExtraLargeLunarTemplate;
- (id)_newBezelTemplate;
- (id)_simpleTextShortDateProvider;

@end
