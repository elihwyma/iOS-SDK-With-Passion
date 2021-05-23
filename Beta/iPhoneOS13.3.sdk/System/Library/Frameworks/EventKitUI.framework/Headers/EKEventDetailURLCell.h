/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKEventDetailCell.h>

@class NSString, NSURL, SGSuggestedEventLaunchInfo, UILabel, UITextView;

__attribute__((visibility("hidden")))
@interface EKEventDetailURLCell : EKEventDetailCell

{
    UILabel *_URLTitleView;
    UITextView *_URLView;
    int _lastLayoutPosition;
    NSURL *_url;
    SGSuggestedEventLaunchInfo *_launchInfo;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)_SGSuggestionsServiceClass;

- (_Bool)update;
- (void)layoutSubviews;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (void)layoutForWidth:(double)arg1 position:(int)arg2;
- (id)initWithEvent:(id)arg1 url:(id)arg2 editable:(_Bool)arg3 style:(long long)arg4;
- (id)initWithEvent:(id)arg1 launchInfo:(id)arg2 editable:(_Bool)arg3 style:(long long)arg4;
- (_Bool)updateLink;
- (void)updateLinkWithURL;
- (void)updateLinkWithLaunchInfo;
- (id)_URLView;
- (void)_layoutForWidth:(double)arg1 position:(int)arg2;
- (id)_URLTitleView;

@end
