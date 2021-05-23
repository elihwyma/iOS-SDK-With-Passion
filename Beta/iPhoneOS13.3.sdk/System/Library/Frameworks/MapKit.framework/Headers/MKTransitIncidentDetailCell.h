/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/MKTableViewCell.h>

@class NSDate, NSLayoutConstraint, NSString, UITextView, _MKUILabel;

__attribute__((visibility("hidden")))
@interface MKTransitIncidentDetailCell : MKTableViewCell

{
    UITextView *_descriptionLabel;
    _MKUILabel *_lastUpdatedLabel;
    NSLayoutConstraint *_descriptionFirstBaselineToTopConstraint;
    NSLayoutConstraint *_descriptionLastBaselineToBottomConstraint;
    NSLayoutConstraint *_lastUpdatedFirstBaselineToDescriptionFirstBaselineConstraint;
    NSLayoutConstraint *_lastUpdatedLastBaselineToBottomConstraint;
    NSDate *_lastUpdated;
}

@property (copy, nonatomic) NSString *incidentDescription;
@property (retain, nonatomic) NSDate *lastUpdated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)updateConstraints;
- (void)didMoveToWindow;
- (id)initWithReuseIdentifier:(id)arg1;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (void)infoCardThemeChanged;
- (void)_contentSizeCategoryDidChange;
- (void)_updateConstraintValues;
- (void)_setConstraints;
- (void)_updateLastUpdatedLabel;

@end
