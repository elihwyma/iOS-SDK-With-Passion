/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class EDAMShareRelationshipRestrictions, NSArray;

@interface EDAMShareRelationships : FATObject

{
    NSArray *_invitations;
    NSArray *_memberships;
    EDAMShareRelationshipRestrictions *_invitationRestrictions;
}

@property (retain, nonatomic) NSArray *invitations;
@property (retain, nonatomic) NSArray *memberships;
@property (retain, nonatomic) EDAMShareRelationshipRestrictions *invitationRestrictions;

+ (id)structName;
+ (id)structFields;

@end
