/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSArray, NSString;

@interface PKApplyWebServiceApplyStepInfo : NSObject

{
    NSString *_conversationIdentifier;
    unsigned long long _contextType;
    NSArray *_pages;
    NSString *_coreIDVSessionID;
    NSString *_coreIDVServiceProviderName;
    NSString *_coreIDVTier;
    NSArray *_encryptionCertificates;
    NSString *_encryptionVersion;
}

@property (copy, nonatomic) NSString *conversationIdentifier;
@property (nonatomic, readonly) unsigned long long contextType;
@property (copy, nonatomic, readonly) NSArray *pages;
@property (copy, nonatomic, readonly) NSString *coreIDVSessionID;
@property (copy, nonatomic, readonly) NSString *coreIDVServiceProviderName;
@property (copy, nonatomic, readonly) NSString *coreIDVTier;
@property (copy, nonatomic, readonly) NSArray *encryptionCertificates;
@property (copy, nonatomic, readonly) NSString *encryptionVersion;

- (void)_handleCertificates:(id)arg1;
- (id)initWithJSONObject:(id)arg1 featureApplication:(id)arg2;

@end
