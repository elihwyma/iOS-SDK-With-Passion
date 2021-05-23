/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIActivityViewController.h>

@class NSArray, NSString;

@interface PHActivityViewController : UIActivityViewController

{
    NSArray *__PHActivityItems;
}

@property (copy, nonatomic, setter=_setPHActivityItems:) NSArray *_PHActivityItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithActivityItems:(id)arg1 applicationActivities:(id)arg2;
- (void)_updateActivityItems:(id)arg1;
- (id)activityItemsForActivity:(id)arg1;
- (id)activityViewControllerForActivity:(id)arg1;

@end
