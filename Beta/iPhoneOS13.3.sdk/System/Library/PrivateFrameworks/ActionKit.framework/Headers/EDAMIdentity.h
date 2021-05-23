/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class EDAMContact, NSNumber;

@interface EDAMIdentity : FATObject

{
    NSNumber *_id;
    EDAMContact *_contact;
    NSNumber *_userId;
    NSNumber *_deactivated;
    NSNumber *_sameBusiness;
    NSNumber *_blocked;
    NSNumber *_userConnected;
    NSNumber *_eventId;
}

@property (retain, nonatomic) NSNumber *id;
@property (retain, nonatomic) EDAMContact *contact;
@property (retain, nonatomic) NSNumber *userId;
@property (retain, nonatomic) NSNumber *deactivated;
@property (retain, nonatomic) NSNumber *sameBusiness;
@property (retain, nonatomic) NSNumber *blocked;
@property (retain, nonatomic) NSNumber *userConnected;
@property (retain, nonatomic) NSNumber *eventId;

+ (id)structName;
+ (id)structFields;

@end
