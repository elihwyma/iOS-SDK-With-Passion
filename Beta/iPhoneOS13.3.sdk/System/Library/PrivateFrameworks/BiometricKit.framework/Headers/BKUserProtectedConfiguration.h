/*
 Image: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
 */

#import <NSObject.h>

@class NSNumber;

@interface BKUserProtectedConfiguration : NSObject

{
    NSNumber *_unlockEnabled;
    NSNumber *_identificationEnabled;
    NSNumber *_loginEnabled;
    NSNumber *_applePayEnabled;
    NSNumber *_attentionDetectionEnabled;
}

@property (retain, nonatomic) NSNumber *unlockEnabled;
@property (retain, nonatomic) NSNumber *identificationEnabled;
@property (retain, nonatomic) NSNumber *loginEnabled;
@property (retain, nonatomic) NSNumber *applePayEnabled;
@property (retain, nonatomic) NSNumber *attentionDetectionEnabled;

- (id)description;
- (id)dictionary;
- (id)initWithDictionary:(id)arg1 effective:(_Bool)arg2;

@end
