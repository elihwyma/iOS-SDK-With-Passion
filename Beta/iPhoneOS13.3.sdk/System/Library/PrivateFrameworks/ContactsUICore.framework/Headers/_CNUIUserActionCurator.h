/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <NSObject.h>

@class CNContactStore, NSString;

@protocol CNLSApplicationWorkspace;

@interface _CNUIUserActionCurator : NSObject

{
    CNContactStore *_contactStore;
    id <CNLSApplicationWorkspace> _applicationWorkspace;
}

@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) id <CNLSApplicationWorkspace> applicationWorkspace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithContactStore:(id)arg1 applicationWorkspace:(id)arg2;
- (id)curateUserAction:(id)arg1;

@end
