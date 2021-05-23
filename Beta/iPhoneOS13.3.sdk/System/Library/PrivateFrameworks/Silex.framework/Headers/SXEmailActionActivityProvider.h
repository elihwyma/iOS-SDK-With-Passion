/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SXContactsPresenter, SXMailPresenter;

@interface SXEmailActionActivityProvider : NSObject

{
    id <SXMailPresenter> _mailPresenter;
    id <SXContactsPresenter> _contactsPresenter;
}

@property (nonatomic, readonly) id <SXMailPresenter> mailPresenter;
@property (nonatomic, readonly) id <SXContactsPresenter> contactsPresenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)activityGroupForAction:(id)arg1;
- (void)composeMailTo:(id)arg1 subject:(id)arg2;
- (void)addToContacts:(id)arg1;
- (id)initWithMailPresenter:(id)arg1 contactsPresenter:(id)arg2;

@end
