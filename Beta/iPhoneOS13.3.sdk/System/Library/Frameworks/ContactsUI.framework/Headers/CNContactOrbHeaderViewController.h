/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UIViewController.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface CNContactOrbHeaderViewController : UIViewController

{
    NSArray *_contacts;
}

@property (retain, nonatomic) NSArray *contacts;

- (void)viewDidLoad;
- (id)initWithContacts:(id)arg1;
- (double)suggestedHeaderWidth;

@end
