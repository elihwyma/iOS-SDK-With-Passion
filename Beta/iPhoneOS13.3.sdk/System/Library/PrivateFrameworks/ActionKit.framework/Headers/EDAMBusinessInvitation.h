/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class NSNumber, NSString;

@interface EDAMBusinessInvitation : FATObject

{
    NSNumber *_businessId;
    NSString *_email;
    NSNumber *_role;
    NSNumber *_status;
    NSNumber *_requesterId;
    NSNumber *_fromWorkChat;
    NSNumber *_created;
}

@property (retain, nonatomic) NSNumber *businessId;
@property (retain, nonatomic) NSString *email;
@property (retain, nonatomic) NSNumber *role;
@property (retain, nonatomic) NSNumber *status;
@property (retain, nonatomic) NSNumber *requesterId;
@property (retain, nonatomic) NSNumber *fromWorkChat;
@property (retain, nonatomic) NSNumber *created;

+ (id)structName;
+ (id)structFields;

@end
