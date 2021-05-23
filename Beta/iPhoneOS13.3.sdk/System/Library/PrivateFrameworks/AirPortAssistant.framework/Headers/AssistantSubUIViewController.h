/*
 Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

#import <AirPortAssistant/AUUITableViewController.h>

@class AssistantUIViewController, NSDictionary, NSMutableDictionary;

@interface AssistantSubUIViewController : AUUITableViewController

{
    AssistantUIViewController *_parentController;
    NSDictionary *_inParamDict;
    NSMutableDictionary *_outResultsDict;
}

@property (nonatomic) AssistantUIViewController *parentController;
@property (retain, nonatomic) NSDictionary *inParamDict;
@property (nonatomic, readonly) NSDictionary *outResultsDict;

+ (id)labelViewInContainer:(id *)arg1 width:(double)arg2 constrain:(_Bool)arg3;
+ (id)labelViewInContainer:(id *)arg1 width:(double)arg2;
+ (id)labelViewInContainer:(id *)arg1 width:(double)arg2 withSpinner:(id *)arg3 above:(_Bool)arg4;
+ (id)topoViewWithWidth:(double)arg1;
+ (id)containerViewWithWidth:(double)arg1;
+ (id)tableViewWithWidth:(double)arg1 height:(double)arg2;

- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (void)setLeftNavigationButton:(id)arg1 enable:(_Bool)arg2 hide:(_Bool)arg3;
- (void)setRightNavigationButton:(id)arg1 enable:(_Bool)arg2 hide:(_Bool)arg3;
- (id)getProductLocalizedStringWithFormat:(id)arg1;

@end
