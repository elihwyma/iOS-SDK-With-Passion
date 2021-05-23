/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <UIKit/UIViewController.h>

@class AKController, NSArray, NSString, UITableView;

@interface AKLineStylesViewController : UIViewController

{
    AKController *_controller;
    UITableView *_tableView;
    NSArray *_lineWidthTags;
}

@property (weak, nonatomic) AKController *controller;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSArray *lineWidthTags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)generateLineImageForTag:(long long)arg1 selected:(_Bool)arg2;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)initWithController:(id)arg1;
- (long long)currentLineWidthTag;
- (void)selectRowForTag:(long long)arg1;
- (id)indexPathForLineWidthTag:(long long)arg1;
- (void)selectedLineWidthChanged:(long long)arg1;

@end
