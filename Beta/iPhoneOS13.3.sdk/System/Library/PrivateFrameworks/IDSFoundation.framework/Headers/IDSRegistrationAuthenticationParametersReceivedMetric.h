/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, PBCodable;

@protocol NSCopying;

@interface IDSRegistrationAuthenticationParametersReceivedMetric : NSObject

{
    long long _errorCode;
    double _timeIntervalSinceAuthenticationParameterRequest;
}

@property (nonatomic, readonly) NSString *name;
@property (readonly) unsigned int awdIdentifier;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) PBCodable<NSCopying> *awdRepresentation;
@property (nonatomic, readonly) long long errorCode;
@property (nonatomic, readonly) double timeIntervalSinceAuthenticationParameterRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithErrorCode:(long long)arg1 timeIntervalSinceAuthenticationParameterRequest:(double)arg2;

@end
