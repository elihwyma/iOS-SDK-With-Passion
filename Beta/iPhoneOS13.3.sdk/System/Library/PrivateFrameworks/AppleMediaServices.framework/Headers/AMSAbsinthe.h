/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

#import <AppleMediaServices/Swift-Protocol.h>

@class NSString;

@interface AMSAbsinthe : NSObject <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)bagKeySet;
+ (void)addRequiredBagKeysToAggregator:(id)arg1;
+ (void)_signingDataFromRequest:(id)arg1 buyParams:(id)arg2 bag:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)_dataToSignFromRequest:(id)arg1 bagDefinition:(id)arg2;
+ (id)headersForRequest:(id)arg1 buyParams:(id)arg2 bag:(id)arg3;
+ (id)handleResponse:(id)arg1 bag:(id)arg2;

@end
