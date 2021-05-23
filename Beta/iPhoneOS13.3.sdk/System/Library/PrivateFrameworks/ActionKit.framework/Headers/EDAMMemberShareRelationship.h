/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class EDAMShareRelationshipRestrictions, NSNumber, NSString;

@interface EDAMMemberShareRelationship : FATObject

{
    NSString *_displayName;
    NSNumber *_recipientUserId;
    NSNumber *_bestPrivilege;
    NSNumber *_individualPrivilege;
    EDAMShareRelationshipRestrictions *_restrictions;
    NSNumber *_sharerUserId;
}

@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSNumber *recipientUserId;
@property (retain, nonatomic) NSNumber *bestPrivilege;
@property (retain, nonatomic) NSNumber *individualPrivilege;
@property (retain, nonatomic) EDAMShareRelationshipRestrictions *restrictions;
@property (retain, nonatomic) NSNumber *sharerUserId;

+ (id)structName;
+ (id)structFields;

@end
