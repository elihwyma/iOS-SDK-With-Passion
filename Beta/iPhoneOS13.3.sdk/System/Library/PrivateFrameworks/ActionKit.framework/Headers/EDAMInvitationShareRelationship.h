/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class EDAMUserIdentity, NSNumber, NSString;

@interface EDAMInvitationShareRelationship : FATObject

{
    NSString *_displayName;
    EDAMUserIdentity *_recipientUserIdentity;
    NSNumber *_privilege;
    NSNumber *_sharerUserId;
}

@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) EDAMUserIdentity *recipientUserIdentity;
@property (retain, nonatomic) NSNumber *privilege;
@property (retain, nonatomic) NSNumber *sharerUserId;

+ (id)structName;
+ (id)structFields;

@end
