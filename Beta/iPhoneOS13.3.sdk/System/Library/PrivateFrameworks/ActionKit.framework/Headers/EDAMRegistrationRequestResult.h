/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class NSNumber, NSString;

@interface EDAMRegistrationRequestResult : FATObject

{
    NSString *_refreshToken;
    NSString *_userEmail;
    NSNumber *_result;
    NSString *_name;
}

@property (retain, nonatomic) NSString *refreshToken;
@property (retain, nonatomic) NSString *userEmail;
@property (retain, nonatomic) NSNumber *result;
@property (retain, nonatomic) NSString *name;

+ (id)structName;
+ (id)structFields;

@end
