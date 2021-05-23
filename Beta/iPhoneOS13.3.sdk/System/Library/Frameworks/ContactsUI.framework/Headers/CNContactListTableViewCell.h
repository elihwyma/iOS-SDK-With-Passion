/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UITableViewCell.h>

@class CNContact, CNContactFormatter, CNContactListStyleApplier, CNContactMatchInfo;

@protocol CNCancelable;

__attribute__((visibility("hidden")))
@interface CNContactListTableViewCell : UITableViewCell

{
    _Bool _isMeCard;
    _Bool _enabled;
    _Bool _isEmergencyContact;
    _Bool _hasBeenDisplayed;
    CNContact *_contact;
    CNContactMatchInfo *_contactMatchInfo;
    CNContactFormatter *_contactFormatter;
    CNContactListStyleApplier *_contactListStyleApplier;
    CDUnknownBlockType _selectedBackgroundViewConfiguration;
    id <CNCancelable> _summaryCancelationToken;
}

@property (retain, nonatomic) id <CNCancelable> summaryCancelationToken;
@property (nonatomic) _Bool hasBeenDisplayed;
@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) CNContactMatchInfo *contactMatchInfo;
@property (retain, nonatomic) CNContactFormatter *contactFormatter;
@property (retain, nonatomic) CNContactListStyleApplier *contactListStyleApplier;
@property (nonatomic) _Bool isMeCard;
@property (nonatomic) _Bool enabled;
@property (nonatomic) _Bool isEmergencyContact;
@property (copy, nonatomic) CDUnknownBlockType selectedBackgroundViewConfiguration;

- (void)dealloc;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setContactMatchInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)cancelAsyncOperations;

@end
