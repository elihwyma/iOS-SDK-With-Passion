/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class CNMutableContact, NSArray;

__attribute__((visibility("hidden")))
@interface CNUIContactSaveResult : NSObject

{
    _Bool _success;
    CNMutableContact *_contact;
    NSArray *_identifiersOfIssuedSaveRequests;
}

@property (nonatomic, readonly) _Bool success;
@property (nonatomic, readonly) CNMutableContact *contact;
@property (nonatomic, readonly) NSArray *identifiersOfIssuedSaveRequests;

- (id)initWithSuccess:(_Bool)arg1 contact:(id)arg2 identifiersOfIssuedSaveRequests:(id)arg3;

@end
