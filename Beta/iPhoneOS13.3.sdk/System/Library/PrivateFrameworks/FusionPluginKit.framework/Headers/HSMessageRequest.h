/*
 Image: /System/Library/PrivateFrameworks/FusionPluginKit.framework/FusionPluginKit
 */

#import <FusionPluginKit/HSMessage.h>

@class NSDictionary, NSString;

@interface HSMessageRequest : HSMessage

{
    NSString *_messageStr;
    NSDictionary *_messageDict;
}

@property (nonatomic, readonly) NSString *messageStr;
@property (nonatomic, readonly) NSDictionary *messageDict;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 request:(id)arg2;

@end
