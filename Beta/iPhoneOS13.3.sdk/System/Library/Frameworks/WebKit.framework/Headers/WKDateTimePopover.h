/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <WebKit/WKFormRotatingAccessoryPopover.h>

@class NSString, WKContentView;

__attribute__((visibility("hidden")))
@interface WKDateTimePopover : WKFormRotatingAccessoryPopover

{
    struct RetainPtr<WKDateTimePopoverViewController> _viewController;
    WKContentView *_view;
}

@property (nonatomic, readonly) NSString *calendarType;

- (id).cxx_construct;
- (id)viewController;
- (void)clear:(id)arg1;
- (id)controlView;
- (void)controlBeginEditing;
- (void)controlEndEditing;
- (id)initWithView:(id)arg1 datePickerMode:(long long)arg2;

@end
