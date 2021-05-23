/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKEventDetailTwoValueCell.h>

__attribute__((visibility("hidden")))
@interface EKEventDetailAlarmCell : EKEventDetailTwoValueCell

+ (id)_alertLocalizedString;

- (_Bool)update;
- (_Bool)isEditable;
- (void)setAlarms:(id)arg1;
- (id)initWithEvent:(id)arg1 editable:(_Bool)arg2 platformStyle:(int)arg3;

@end
