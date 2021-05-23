/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <UIKit/UITableViewController.h>

@class NSArray, NSURL, SLVideoQualityOption;

@protocol SLFacebookVideoOptionsDelegate;

__attribute__((visibility("hidden")))
@interface SLFacebookVideoOptionsViewController : UITableViewController

{
    NSArray *_qualityOptions;
    NSURL *_videoAssetURL;
    SLVideoQualityOption *_selectedOption;
    id <SLFacebookVideoOptionsDelegate> _delegate;
}

@property (weak, nonatomic) id <SLFacebookVideoOptionsDelegate> delegate;

- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)_generateQualityOptionsWithAssetURL:(id)arg1;
- (id)initWithVideoAssetURL:(id)arg1;
- (void)setSelectedQualityOption:(id)arg1;

@end
