/*
 Image: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
 */

#import <NSObject.h>

@class NSNumber;

@interface BKSystemProtectedConfiguration : NSObject

{
    NSNumber *_biometryEnabled;
    NSNumber *_unlockEnabled;
    NSNumber *_identificationEnabled;
    NSNumber *_loginEnabled;
    NSNumber *_unlockTokenMaxLifetime;
}

@property (retain, nonatomic) NSNumber *biometryEnabled;
@property (retain, nonatomic) NSNumber *unlockEnabled;
@property (retain, nonatomic) NSNumber *identificationEnabled;
@property (retain, nonatomic) NSNumber *loginEnabled;
@property (retain, nonatomic) NSNumber *unlockTokenMaxLifetime;

- (id)description;
- (id)dictionary;
- (id)initWithDictionary:(id)arg1;

@end
