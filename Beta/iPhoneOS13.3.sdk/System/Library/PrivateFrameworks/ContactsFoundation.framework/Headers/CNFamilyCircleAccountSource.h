/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@class FAFamilyCircle, NSString;

@interface CNFamilyCircleAccountSource : NSObject

{
    FAFamilyCircle *_familyCircle;
}

@property (nonatomic, readonly) FAFamilyCircle *familyCircle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)primaryAccount;
- (id)initWithFamilyCircle:(id)arg1;
- (id)delegateAccounts;
- (id)myFamilyMemberRecord;

@end
