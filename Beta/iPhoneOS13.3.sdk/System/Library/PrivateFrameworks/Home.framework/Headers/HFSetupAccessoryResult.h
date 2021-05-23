/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class HMSetupAccessoryPayload, NSError;

@interface HFSetupAccessoryResult : NSObject

{
    _Bool _hasAddRequest;
    _Bool _isValidForPairing;
    NSError *_error;
    HMSetupAccessoryPayload *_setupPayload;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) HMSetupAccessoryPayload *setupPayload;
@property (nonatomic, readonly) _Bool hasAddRequest;
@property (nonatomic, readonly) _Bool isValidForPairing;

+ (_Bool)isHomeKitURL:(id)arg1;

- (id)description;
- (id)initWithSetupCode:(id)arg1;
- (_Bool)isAllZerosCode;
- (id)initWithPayload:(id)arg1 error:(id)arg2 hasAddRequest:(_Bool)arg3;
- (id)initWithPayload:(id)arg1 hasAddRequest:(_Bool)arg2;
- (id)initWithSetupURL:(id)arg1;

@end
