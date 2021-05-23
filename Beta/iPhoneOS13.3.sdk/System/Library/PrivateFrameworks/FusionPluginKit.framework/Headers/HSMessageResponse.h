/*
 Image: /System/Library/PrivateFrameworks/FusionPluginKit.framework/FusionPluginKit
 */

#import <FusionPluginKit/HSMessage.h>

@class NSDictionary, NSError, NSNumber, NSString;

@interface HSMessageResponse : HSMessage

{
    NSString *_messageStr;
    NSNumber *_statusCode;
    NSDictionary *_responseDict;
    NSError *_error;
    NSString *_errorDescription;
}

@property (nonatomic, readonly) NSString *messageStr;
@property (nonatomic, readonly) NSNumber *statusCode;
@property (nonatomic, readonly) NSDictionary *responseDict;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSString *errorDescription;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 statusCode:(id)arg2;
- (id)initWithName:(id)arg1 statusCode:(id)arg2 andResponse:(id)arg3;
- (id)initWithName:(id)arg1 statusCode:(id)arg2 andResponse:(id)arg3 andError:(id)arg4;

@end
