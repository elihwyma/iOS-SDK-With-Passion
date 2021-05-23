/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKCDetailTableViewCell.h>

@class NSString, NTKComplication;

@interface NTKCFaceDetailComplicationCell : NTKCDetailTableViewCell

{
    _Bool _dateSlot;
    _Bool _isRichSlot;
    _Bool _active;
    _Bool _enabled;
    NSString *_slot;
    NTKComplication *_complication;
}

@property (nonatomic, readonly) NSString *slot;
@property (retain, nonatomic) NTKComplication *complication;
@property (nonatomic, readonly) _Bool dateSlot;
@property (nonatomic, readonly) _Bool isRichSlot;
@property (nonatomic) _Bool active;
@property (nonatomic) _Bool enabled;

+ (id)reuseIdentifier;

- (double)rowHeight;
- (void)_updateState;
- (id)_disabledColor;
- (id)_inactiveColor;
- (id)_activeColor;
- (void)_updateLabelFonts;
- (void)_updateDetailText;
- (id)_traitCollectionAdjustedIfNeeded;
- (id)initWithSlot:(id)arg1 dateSlot:(_Bool)arg2 isRichSlot:(_Bool)arg3 inFace:(id)arg4;

@end
