/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <UIKit/UIViewController.h>

@class NSArray, NSObject, NSString, UITableView;

@protocol SLMicroBlogMentionsDelegate, SLMicroBlogSheetDelegate;

@interface SLMicroBlogMentionsViewController : UIViewController

{
    NSObject<SLMicroBlogSheetDelegate> *_sheetDelegate;
    NSArray *_mentions;
    NSString *_searchString;
    UITableView *_tableView;
    NSObject<SLMicroBlogMentionsDelegate> *_delegate;
}

@property (weak, nonatomic) NSObject<SLMicroBlogMentionsDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_blankSurrogateProfileImage;

- (void)loadView;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)setSearchString:(id)arg1;
- (id)initWithSheetDelegate:(id)arg1;
- (void)updateMentions;
- (void)setMentions:(id)arg1;
- (id)mentions;
- (void)completeWithSelectedMention:(id)arg1;
- (void)chooseRow:(long long)arg1;

@end
