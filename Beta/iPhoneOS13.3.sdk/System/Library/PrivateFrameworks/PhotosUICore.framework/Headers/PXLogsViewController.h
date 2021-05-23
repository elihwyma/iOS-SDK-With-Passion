/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIViewController.h>

@class NSArray, NSDate, NSDateFormatter, NSMutableArray, NSMutableAttributedString, NSMutableDictionary, NSMutableIndexSet, OSLogEventStreamBase, UIActivityIndicatorView, UITextView;

@interface PXLogsViewController : UIViewController

{
    NSArray *_subsystemsAndCategories;
    NSDate *_startDate;
    UITextView *_textView;
    UIActivityIndicatorView *_spinnerView;
    OSLogEventStreamBase *_eventStream;
    NSMutableAttributedString *_fullAttributedString;
    _Bool _hasScheduledTextViewUpdate;
    NSMutableArray *_compactLogs;
    NSMutableArray *_expandedLogs;
    NSMutableIndexSet *_isExpanded;
    NSMutableDictionary *_substitutionByObjectRepresentation;
    NSMutableDictionary *_nextAvailableIndexByClassName;
    NSDateFormatter *_dateFormatter;
}

@property (retain, nonatomic) NSDateFormatter *dateFormatter;

- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)tapped:(id)arg1;
- (id)initWithSubsystemsAndCategories:(id)arg1 startDate:(id)arg2;
- (id)initWithSubsystem:(id)arg1 category:(id)arg2 startDate:(id)arg3;
- (id)initLiveWithSubsystemsAndCategories:(id)arg1;
- (id)initLiveWithSubsystem:(id)arg1 category:(id)arg2;
- (void)prepareDiskStore;
- (void)prepareLiveStore;
- (id)subsystemsAndCategoriesPredicateWithSubsystemsAndCategories:(id)arg1;
- (void)setupEventStream:(id)arg1;
- (void)removeSpinner;
- (void)logAttributedString:(id)arg1;
- (void)toggleModeForStringIndex:(unsigned long long)arg1;
- (id)substitutionForObjectRepresentation:(id)arg1;
- (_Bool)isCollectionRepresentation:(id)arg1;
- (id)substitutionForCollectionRepresentation:(id)arg1 attributes:(id)arg2;

@end
