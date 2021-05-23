/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class EDAMSharedNotebookRecipientSettings, NSNumber, NSString;

@interface EDAMSharedNotebook : FATObject

{
    NSNumber *_id;
    NSNumber *_userId;
    NSString *_notebookGuid;
    NSString *_email;
    NSNumber *_recipientIdentityId;
    NSNumber *_notebookModifiable;
    NSNumber *_serviceCreated;
    NSNumber *_serviceUpdated;
    NSString *_globalId;
    NSString *_username;
    NSNumber *_privilege;
    EDAMSharedNotebookRecipientSettings *_recipientSettings;
    NSNumber *_sharerUserId;
    NSString *_recipientUsername;
    NSNumber *_recipientUserId;
    NSNumber *_serviceAssigned;
}

@property (retain, nonatomic) NSNumber *id;
@property (retain, nonatomic) NSNumber *userId;
@property (retain, nonatomic) NSString *notebookGuid;
@property (retain, nonatomic) NSString *email;
@property (retain, nonatomic) NSNumber *recipientIdentityId;
@property (retain, nonatomic) NSNumber *notebookModifiable;
@property (retain, nonatomic) NSNumber *serviceCreated;
@property (retain, nonatomic) NSNumber *serviceUpdated;
@property (retain, nonatomic) NSString *globalId;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSNumber *privilege;
@property (retain, nonatomic) EDAMSharedNotebookRecipientSettings *recipientSettings;
@property (retain, nonatomic) NSNumber *sharerUserId;
@property (retain, nonatomic) NSString *recipientUsername;
@property (retain, nonatomic) NSNumber *recipientUserId;
@property (retain, nonatomic) NSNumber *serviceAssigned;

+ (id)structName;
+ (id)structFields;

@end
