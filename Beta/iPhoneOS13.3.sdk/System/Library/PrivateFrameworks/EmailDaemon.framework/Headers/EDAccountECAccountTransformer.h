/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSValueTransformer.h>

@interface EDAccountECAccountTransformer : NSValueTransformer

+ (_Bool)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (id)transformedValue:(id)arg1;
- (id)transformAccount:(id)arg1;
- (id)transformReceivingAccount:(id)arg1;
- (id)transformDeliveryAccount:(id)arg1;

@end
