/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class NSNumber, NSString;

@interface EDAMNoteInvitationShareRelationship : FATObject

{
    NSString *_displayName;
    NSNumber *_recipientIdentityId;
    NSNumber *_privilege;
    NSNumber *_sharerUserId;
}

@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSNumber *recipientIdentityId;
@property (retain, nonatomic) NSNumber *privilege;
@property (retain, nonatomic) NSNumber *sharerUserId;

+ (id)structName;
+ (id)structFields;

@end
