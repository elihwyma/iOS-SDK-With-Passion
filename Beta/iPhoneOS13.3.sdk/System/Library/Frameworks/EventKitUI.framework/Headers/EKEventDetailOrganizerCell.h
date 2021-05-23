/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKEventDetailCell.h>

@class EKUILabeledAvatarView, NSString, UILabel;

@protocol EKIdentityProtocol;

__attribute__((visibility("hidden")))
@interface EKEventDetailOrganizerCell : EKEventDetailCell

{
    NSString *_organizerName;
    EKUILabeledAvatarView *_organizerView;
    UILabel *_organizerLabel;
    UILabel *_titleView;
    id <EKIdentityProtocol> _organizerOverride;
    _Bool _hideDisclosureIndicator;
}

@property (nonatomic) _Bool hideDisclosureIndicator;

+ (id)_titleFont;
+ (id)_organizerFont;

- (_Bool)update;
- (id)_titleView;
- (_Bool)shouldDisplayForEvent;
- (id)initWithEvent:(id)arg1 editable:(_Bool)arg2 organizerOverride:(id)arg3;
- (void)_updateDisclosureIndicator;
- (id)_organizerView;
- (id)_organizerLabel;

@end
