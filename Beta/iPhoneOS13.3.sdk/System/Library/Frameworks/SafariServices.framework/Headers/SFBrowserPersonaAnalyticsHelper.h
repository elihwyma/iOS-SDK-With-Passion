/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface SFBrowserPersonaAnalyticsHelper : NSObject

{
    unsigned long long _persona;
    _Bool _hasReportedPresentingFromHostApp;
}

- (id)initWithPersona:(unsigned long long)arg1;
- (void)didTapToolbarButton:(int)arg1;
- (void)didLongTapToolbarButton:(int)arg1;
- (void)didDismissWithMethod:(int)arg1;
- (void)didPresentFromHostApp:(id)arg1;

@end
