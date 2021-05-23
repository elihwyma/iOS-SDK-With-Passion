/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UIView.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface CNTestQuickActionView : UIView

{
    _Bool _enabled;
    NSString *_title;
    NSMutableArray *_titlesAssigned;
    NSMutableArray *_statesAssigned;
}

@property (nonatomic, readonly) NSMutableArray *titlesAssigned;
@property (nonatomic, readonly) NSMutableArray *statesAssigned;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool enabled;
@property (retain, nonatomic) NSString *title;

- (id)init;

@end
