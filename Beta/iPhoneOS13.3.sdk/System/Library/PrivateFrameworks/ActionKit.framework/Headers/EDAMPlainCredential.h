/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class NSNumber, NSString;

@interface EDAMPlainCredential : FATObject

{
    NSNumber *_userId;
    NSString *_password;
}

@property (retain, nonatomic) NSNumber *userId;
@property (retain, nonatomic) NSString *password;

+ (id)structName;
+ (id)structFields;

@end
