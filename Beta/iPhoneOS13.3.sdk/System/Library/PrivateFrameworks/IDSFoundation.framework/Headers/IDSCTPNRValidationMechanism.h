/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

#import <IDSFoundation/Swift-Protocol.h>

@class NSString;

@interface IDSCTPNRValidationMechanism : NSObject <Swift>

{
    long long _type;
    NSString *_context;
}

@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSString *context;

+ (id)SMSMechanismWithContext:(id)arg1;
+ (id)SMSLessMechanism;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithType:(long long)arg1 context:(id)arg2;

@end
