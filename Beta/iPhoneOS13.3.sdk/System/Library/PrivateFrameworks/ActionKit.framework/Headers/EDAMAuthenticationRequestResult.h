/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class NSNumber, NSString;

@interface EDAMAuthenticationRequestResult : FATObject

{
    NSNumber *_userId;
    NSString *_userEmail;
    NSNumber *_result;
}

@property (retain, nonatomic) NSNumber *userId;
@property (retain, nonatomic) NSString *userEmail;
@property (retain, nonatomic) NSNumber *result;

+ (id)structName;
+ (id)structFields;

@end
