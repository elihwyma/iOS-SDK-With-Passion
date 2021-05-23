/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIViewController.h>

@class NSCountedSet, NSDictionary, NSMutableDictionary, NSString, UISegmentedControl, UITableView;

@interface PXDebugRelatedViewController : UIViewController

{
    UISegmentedControl *_segmentedControl;
    UITableView *_tableView;
    double _curationScore;
    double _graphScore;
    double _neighborScore;
    double _relatedScore;
    double _matchingScore;
    _Bool _isInteresting;
    unsigned long long _relatedType;
    NSString *_debugDescription;
    NSDictionary *_matchingWeight;
    NSDictionary *_matchingKeywords;
    NSDictionary *_referenceKeywords;
    NSDictionary *_relatedKeywords;
    NSMutableDictionary *_currentKeywords;
    NSCountedSet *_countedKeywords;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithDictionary:(id)arg1;
- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)_setupWithDictionary:(id)arg1;
- (void)_initDataSourceWithKeywords:(id)arg1;
- (void)_switchLogsAction:(id)arg1;
- (void)_sendByEmailAction:(id)arg1;
- (void)_closeAction:(id)arg1;

@end
