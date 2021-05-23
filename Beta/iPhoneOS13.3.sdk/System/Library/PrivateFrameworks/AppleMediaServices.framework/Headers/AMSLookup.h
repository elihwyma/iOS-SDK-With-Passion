/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <AppleMediaServices/AMSTask.h>

#import <AppleMediaServices/Swift-Protocol.h>

@class AMSProcessInfo, NSString;

@protocol AMSBagProtocol;

@interface AMSLookup : AMSTask <Swift>

{
    id <AMSBagProtocol> _bag;
    NSString *_caller;
    AMSProcessInfo *_clientInfo;
    NSString *_imageProfile;
    NSString *_keyProfile;
    NSString *_platform;
    long long _signatureType;
    long long _version;
    NSString *_language;
}

@property (retain, nonatomic) id <AMSBagProtocol> bag;
@property (retain, nonatomic) NSString *caller;
@property (retain, nonatomic) AMSProcessInfo *clientInfo;
@property (retain, nonatomic) NSString *imageProfile;
@property (retain, nonatomic) NSString *keyProfile;
@property (retain, nonatomic) NSString *platform;
@property (nonatomic) long long signatureType;
@property (nonatomic) long long version;
@property (retain, nonatomic) NSString *language;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)bagKeySet;
+ (void)addRequiredBagKeysToAggregator:(id)arg1;

- (id)initWithBagContract:(id)arg1;
- (id)contract;
- (id)_compileQueryParametersWithBundleIds:(id)arg1 itemIds:(id)arg2;
- (void)_addJSSignatureToRequest:(id)arg1;
- (id)initWithBagContract:(id)arg1 caller:(id)arg2 keyProfile:(id)arg3;
- (id)initWithBag:(id)arg1 caller:(id)arg2 keyProfile:(id)arg3;
- (id)performLookupWithBundleIdentifiers:(id)arg1 itemIdentifiers:(id)arg2;
- (void)setContract:(id)arg1;

@end
