/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class EDAMNoteShareRelationshipRestrictions, NSArray;

@interface EDAMNoteShareRelationships : FATObject

{
    NSArray *_invitations;
    NSArray *_memberships;
    EDAMNoteShareRelationshipRestrictions *_invitationRestrictions;
}

@property (retain, nonatomic) NSArray *invitations;
@property (retain, nonatomic) NSArray *memberships;
@property (retain, nonatomic) EDAMNoteShareRelationshipRestrictions *invitationRestrictions;

+ (id)structName;
+ (id)structFields;

@end
