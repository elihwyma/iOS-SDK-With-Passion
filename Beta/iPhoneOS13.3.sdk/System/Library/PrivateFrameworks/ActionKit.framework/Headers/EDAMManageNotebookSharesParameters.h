/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class NSArray, NSString;

@interface EDAMManageNotebookSharesParameters : FATObject

{
    NSString *_notebookGuid;
    NSString *_inviteMessage;
    NSArray *_membershipsToUpdate;
    NSArray *_invitationsToCreateOrUpdate;
    NSArray *_unshares;
}

@property (retain, nonatomic) NSString *notebookGuid;
@property (retain, nonatomic) NSString *inviteMessage;
@property (retain, nonatomic) NSArray *membershipsToUpdate;
@property (retain, nonatomic) NSArray *invitationsToCreateOrUpdate;
@property (retain, nonatomic) NSArray *unshares;

+ (id)structName;
+ (id)structFields;

@end
