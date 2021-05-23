/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UITableViewCell.h>

@class EKEvent;

@interface EKEventDetailCell : UITableViewCell

{
    EKEvent *_event;
    _Bool _editable;
    double _lastLaidOutWidth;
    int _lastLaidOutPosition;
}

@property (nonatomic, readonly) _Bool isEditable;

+ (double)detailsPostLabelSpace;
+ (double)detailsTopVerticalInset;
+ (double)detailsBottomVerticalInset;
+ (double)detailsCellDefaultHeight;
+ (id)_bodyFontAtDefaultSize;
+ (double)_scaledDistanceCalculatedFromTopFromBaseline:(double)arg1;
+ (double)_scaledDistanceCalculatedFromBottomToBaseline:(double)arg1;

- (void)setEvent:(id)arg1;
- (_Bool)update;
- (void)sizeToFit;
- (void)layoutMarginsDidChange;
- (void)layoutForWidth:(double)arg1 position:(int)arg2;
- (id)initWithEvent:(id)arg1 editable:(_Bool)arg2;
- (id)initWithEvent:(id)arg1 editable:(_Bool)arg2 style:(long long)arg3;
- (double)detailsLeftInset;
- (_Bool)needsLayoutForWidth:(double)arg1 position:(int)arg2;
- (double)detailsRightInset;

@end
