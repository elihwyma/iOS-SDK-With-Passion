/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKWebServiceRequest.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSArray, NSDictionary, NSMutableDictionary;

@interface PKOverlayableWebServiceRequest : PKWebServiceRequest <Swift>

{
    NSMutableDictionary *_overlayParameters;
    NSMutableDictionary *_secureOverlayParameters;
    NSArray *_overridenKeys;
    _Bool _requiresConfigurationForRetry;
    _Bool _requiresConfigurationForRedirect;
}

@property (copy, nonatomic) NSDictionary *overlayParameters;
@property (copy, nonatomic) NSDictionary *secureOverlayParameters;
@property (nonatomic) _Bool requiresConfigurationForRetry;
@property (nonatomic) _Bool requiresConfigurationForRedirect;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_applySecureOverlayToDictionary:(id)arg1;
- (void)_applyOverlayToDictionary:(id)arg1;
- (void)setOverlayValue:(id)arg1 forKey:(id)arg2;
- (id)overlayValueForKey:(id)arg1;
- (void)setSecureOverlayValue:(id)arg1 forKey:(id)arg2;
- (id)secureOverlayValueForKey:(id)arg1;
- (void)_setOverriddenKeys:(id)arg1;
- (void)_updateRequestForRedirect:(id)arg1 overrides:(id)arg2 webService:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)_updateRequestForRetry:(id)arg1 retryFields:(id)arg2 webService:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (_Bool)hasOverlayParameters;

@end
