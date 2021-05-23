/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class NSNumber, NSString;

@interface EDAMBusinessUserInfo : FATObject

{
    NSNumber *_businessId;
    NSString *_businessName;
    NSNumber *_role;
    NSString *_email;
    NSNumber *_updated;
}

@property (retain, nonatomic) NSNumber *businessId;
@property (retain, nonatomic) NSString *businessName;
@property (retain, nonatomic) NSNumber *role;
@property (retain, nonatomic) NSString *email;
@property (retain, nonatomic) NSNumber *updated;

+ (id)structName;
+ (id)structFields;

@end
