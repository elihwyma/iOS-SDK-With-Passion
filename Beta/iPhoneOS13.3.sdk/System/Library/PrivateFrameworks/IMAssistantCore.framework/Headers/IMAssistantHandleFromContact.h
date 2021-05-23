/*
 Image: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore
 */

#import <Foundation/NSObject.h>

@class CNContact, CNLabeledValue, NSString;

@interface IMAssistantHandleFromContact : NSObject

{
    CNContact *_contact;
    CNLabeledValue *_labeledEmailAddress;
    CNLabeledValue *_labeledPhoneNumber;
    NSString *_businessID;
    NSString *_displayID;
    long long _handleType;
}

@property (nonatomic, readonly) long long handleType;
@property (nonatomic, readonly) CNContact *contact;
@property (nonatomic, readonly) CNLabeledValue *labeledEmailAddress;
@property (nonatomic, readonly) CNLabeledValue *labeledPhoneNumber;
@property (nonatomic, readonly) NSString *businessID;
@property (nonatomic, readonly) NSString *handleID;
@property (nonatomic, readonly) NSString *displayID;
@property (nonatomic, readonly) long long personHandleType;
@property (nonatomic, readonly) NSString *personHandleLabel;

- (id)description;
- (_Bool)matchesIMHandle:(id)arg1;
- (id)initWithCNLabeledPhoneNumber:(id)arg1 contact:(id)arg2;
- (id)initWithCNLabeledEmailAddress:(id)arg1 contact:(id)arg2;
- (id)initWithBusinessID:(id)arg1;
- (_Bool)matchesHandleID:(id)arg1;
- (id)_initWithPhoneNumber:(id)arg1 emailAddress:(id)arg2 businessID:(id)arg3 handleType:(long long)arg4 contact:(id)arg5;

@end
