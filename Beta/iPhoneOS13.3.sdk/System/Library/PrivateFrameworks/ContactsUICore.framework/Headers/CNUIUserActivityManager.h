/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <NSObject.h>

@class CNContactStore;

@protocol CNLSApplicationWorkspace, CNUIInteractionDonor;

@interface CNUIUserActivityManager : NSObject

{
    CNContactStore *_contactStore;
    id <CNLSApplicationWorkspace> _applicationWorkspace;
    id <CNUIInteractionDonor> _interactionDonor;
}

@property (nonatomic, readonly) CNContactStore *contactStore;
@property (nonatomic, readonly) id <CNLSApplicationWorkspace> applicationWorkspace;
@property (nonatomic, readonly) id <CNUIInteractionDonor> interactionDonor;

+ (id)log;
+ (id)descriptorForRequiredKeys;

- (id)initWithContactStore:(id)arg1;
- (id)initWithApplicationWorkspace:(id)arg1;
- (void)updateUserActivityState:(id)arg1 withContentsOfContact:(id)arg2;
- (id)makeActivityAdvertisingViewingOfContact:(id)arg1;
- (void)publishRequestToCreateContact:(id)arg1;
- (id)initWithContactStore:(id)arg1 applicationWorkspace:(id)arg2;
- (void)publishRequestToEditContact:(id)arg1;
- (id)initWithContactStore:(id)arg1 applicationWorkspace:(id)arg2 interactionDonor:(id)arg3;
- (id)makeActivityAdvertisingViewingList;

@end
