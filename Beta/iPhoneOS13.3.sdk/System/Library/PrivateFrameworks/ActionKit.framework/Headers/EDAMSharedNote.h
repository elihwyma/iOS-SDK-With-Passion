/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class EDAMIdentity, NSNumber;

@interface EDAMSharedNote : FATObject

{
    NSNumber *_sharerUserID;
    EDAMIdentity *_recipientIdentity;
    NSNumber *_privilege;
    NSNumber *_serviceCreated;
    NSNumber *_serviceUpdated;
    NSNumber *_serviceAssigned;
}

@property (retain, nonatomic) NSNumber *sharerUserID;
@property (retain, nonatomic) EDAMIdentity *recipientIdentity;
@property (retain, nonatomic) NSNumber *privilege;
@property (retain, nonatomic) NSNumber *serviceCreated;
@property (retain, nonatomic) NSNumber *serviceUpdated;
@property (retain, nonatomic) NSNumber *serviceAssigned;

+ (id)structName;
+ (id)structFields;

@end
