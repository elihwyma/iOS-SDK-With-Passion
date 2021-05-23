/*
 Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
 */

#import <Foundation/NSObject.h>

@class AAFamilyMember, AAUIProfilePictureStore, NSString, UITableView;

@protocol UITableViewDelegate;

@interface FAFamilyMemberDetailsPageSurrogate : NSObject

{
    NSObject<UITableViewDelegate> *_remoteTableViewController;
    UITableView *_remoteTableView;
    AAFamilyMember *_familyMember;
    AAUIProfilePictureStore *_pictureStore;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)initWithPage:(id)arg1 forPerson:(id)arg2 account:(id)arg3 store:(id)arg4;

@end
