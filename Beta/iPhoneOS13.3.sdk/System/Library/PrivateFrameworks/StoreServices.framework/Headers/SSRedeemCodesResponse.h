/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface SSRedeemCodesResponse : NSObject

{
    NSDictionary *_codeResponses;
    NSDictionary *_errors;
    NSDictionary *_redeemedCodes;
}

@property (copy, nonatomic, readonly) NSArray *codeResponses;
@property (nonatomic, readonly) NSArray *failedCodes;
@property (copy, nonatomic, readonly) NSArray *redeemedCodes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)errorForCode:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (id)dictionaryForCode:(id)arg1;
- (id)responseDictionaryForCode:(id)arg1;
- (void)setCodeResponses:(id)arg1;
- (void)setFailedCodes:(id)arg1;
- (void)setRedeemedCodes:(id)arg1;

@end
