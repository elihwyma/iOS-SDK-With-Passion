/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATException.h>

@class NSNumber, NSString;

@interface EDAMSystemException : FATException

{
    NSNumber *_errorCode;
    NSString *_message;
    NSNumber *_rateLimitDuration;
}

@property (retain, nonatomic) NSNumber *errorCode;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) NSNumber *rateLimitDuration;

+ (id)structName;
+ (id)structFields;

@end
