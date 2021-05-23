/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class EDAMBusinessUserAttributes, NSNumber, NSString;

@interface EDAMUserProfile : FATObject

{
    NSNumber *_id;
    NSString *_name;
    NSString *_email;
    NSString *_username;
    EDAMBusinessUserAttributes *_attributes;
    NSNumber *_joined;
    NSNumber *_photoLastUpdated;
    NSString *_photoUrl;
    NSNumber *_role;
}

@property (retain, nonatomic) NSNumber *id;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *email;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) EDAMBusinessUserAttributes *attributes;
@property (retain, nonatomic) NSNumber *joined;
@property (retain, nonatomic) NSNumber *photoLastUpdated;
@property (retain, nonatomic) NSString *photoUrl;
@property (retain, nonatomic) NSNumber *role;

+ (id)structName;
+ (id)structFields;

@end
