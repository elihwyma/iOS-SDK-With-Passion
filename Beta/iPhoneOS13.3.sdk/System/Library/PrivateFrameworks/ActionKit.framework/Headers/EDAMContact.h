/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class NSData, NSNumber, NSString;

@interface EDAMContact : FATObject

{
    NSString *_name;
    NSString *_id;
    NSNumber *_type;
    NSString *_photoUrl;
    NSNumber *_photoLastUpdated;
    NSData *_messagingPermit;
    NSNumber *_messagingPermitExpires;
}

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *id;
@property (retain, nonatomic) NSNumber *type;
@property (retain, nonatomic) NSString *photoUrl;
@property (retain, nonatomic) NSNumber *photoLastUpdated;
@property (retain, nonatomic) NSData *messagingPermit;
@property (retain, nonatomic) NSNumber *messagingPermitExpires;

+ (id)structName;
+ (id)structFields;

@end
