/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATException.h>

@class NSNumber, NSString;

@interface EDAMUserException : FATException

{
    NSNumber *_errorCode;
    NSString *_parameter;
}

@property (retain, nonatomic) NSNumber *errorCode;
@property (retain, nonatomic) NSString *parameter;

+ (id)structName;
+ (id)structFields;

@end
