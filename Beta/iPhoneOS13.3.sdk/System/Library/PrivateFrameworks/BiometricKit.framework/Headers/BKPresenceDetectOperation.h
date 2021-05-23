/*
 Image: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
 */

#import <BiometricKit/BKOperation.h>

@interface BKPresenceDetectOperation : BKOperation

{
    long long _priority;
}

@property (nonatomic) long long priority;

- (void)startBioOperation:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;
- (id)optionsDictionaryWithError:(id *)arg1;

@end
