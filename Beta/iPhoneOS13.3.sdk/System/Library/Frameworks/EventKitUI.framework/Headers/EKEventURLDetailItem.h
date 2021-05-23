/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKEventDetailItem.h>

@class NSURL, SGSuggestedEventLaunchInfo, UITableViewCell;

__attribute__((visibility("hidden")))
@interface EKEventURLDetailItem : EKEventDetailItem

{
    UITableViewCell *_cell;
    SGSuggestedEventLaunchInfo *_launchInfo;
    NSURL *_url;
}

+ (Class)_SGSuggestionsServiceClass;

- (void)reset;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (_Bool)configureWithCalendar:(id)arg1 preview:(_Bool)arg2;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (_Bool)hasDetailViewControllerAtIndex:(unsigned long long)arg1;

@end
