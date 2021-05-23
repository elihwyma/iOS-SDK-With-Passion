/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSArray, NSDictionary;

@interface PKSecureElementConsistencyData : NSObject

{
    unsigned long long _backoffLevel;
    NSDictionary *_secureElementAppletStateByAID;
    NSDictionary *_passStateByAID;
    NSDictionary *_cleanupActionsByAID;
    NSArray *_registeredRegions;
}

@property (nonatomic) unsigned long long backoffLevel;
@property (copy, nonatomic) NSDictionary *secureElementAppletStateByAID;
@property (copy, nonatomic) NSDictionary *passStateByAID;
@property (copy, nonatomic) NSDictionary *cleanupActionsByAID;
@property (copy, nonatomic) NSArray *registeredRegions;

+ (id)consistencyDataWithPaymentApplications:(id)arg1 secureElementApplets:(id)arg2 cleanupActions:(id)arg3 registeredRegions:(id)arg4;

- (id)dictionaryRepresentation;

@end
