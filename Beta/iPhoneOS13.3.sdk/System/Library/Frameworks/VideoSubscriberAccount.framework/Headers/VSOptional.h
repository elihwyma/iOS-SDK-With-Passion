/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSObject.h>

@interface VSOptional : NSObject

{
    id _object;
}

@property (retain, nonatomic) id object;

+ (_Bool)supportsSecureCoding;
+ (id)decodableClasses;
+ (id)optionalWithObject:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithObject:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)forceUnwrapObject;
- (id)unwrapWithFallback:(id)arg1;
- (void)conditionallyUnwrapObject:(CDUnknownBlockType)arg1;
- (void)conditionallyUnwrapObject:(CDUnknownBlockType)arg1 otherwise:(CDUnknownBlockType)arg2;

@end
