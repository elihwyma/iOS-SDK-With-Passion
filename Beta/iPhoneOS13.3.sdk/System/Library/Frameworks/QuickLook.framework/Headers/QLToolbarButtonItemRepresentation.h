/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <UIBarButtonItem.h>

@class NSString, QLPreviewController, QLToolbarButton;

__attribute__((visibility("hidden")))
@interface QLToolbarButtonItemRepresentation : UIBarButtonItem

{
    _Bool _disappearsOnTap;
    NSString *_identifier;
    unsigned long long _placement;
    QLPreviewController *_presentingViewController;
    QLToolbarButton *_originalButton;
}

@property (retain) NSString *identifier;
@property unsigned long long placement;
@property _Bool disappearsOnTap;
@property (weak) QLToolbarButton *originalButton;
@property (weak) QLPreviewController *presentingViewController;

- (_Bool)isEqual:(id)arg1;

@end
