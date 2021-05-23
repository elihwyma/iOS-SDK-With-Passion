/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class EDAMNoteShareRelationshipRestrictions, NSNumber, NSString;

@interface EDAMNoteMemberShareRelationship : FATObject

{
    NSString *_displayName;
    NSNumber *_recipientUserId;
    NSNumber *_privilege;
    EDAMNoteShareRelationshipRestrictions *_restrictions;
    NSNumber *_sharerUserId;
}

@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSNumber *recipientUserId;
@property (retain, nonatomic) NSNumber *privilege;
@property (retain, nonatomic) EDAMNoteShareRelationshipRestrictions *restrictions;
@property (retain, nonatomic) NSNumber *sharerUserId;

+ (id)structName;
+ (id)structFields;

@end
