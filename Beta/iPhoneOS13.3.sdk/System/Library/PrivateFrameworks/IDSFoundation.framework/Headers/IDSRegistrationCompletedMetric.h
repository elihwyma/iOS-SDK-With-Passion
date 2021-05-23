/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, PBCodable;

@protocol NSCopying;

@interface IDSRegistrationCompletedMetric : NSObject

{
    int _registrationType;
    NSString *_serviceIdentifier;
    _Bool _wasSuccessful;
    long long _registrationError;
    long long _circleStatus;
}

@property (nonatomic, readonly) NSString *name;
@property (readonly) unsigned int awdIdentifier;
@property (nonatomic, readonly) unsigned short rtcType;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) PBCodable<NSCopying> *awdRepresentation;
@property (nonatomic, readonly) int registrationType;
@property (nonatomic, readonly) NSString *serviceIdentifier;
@property (nonatomic, readonly) _Bool wasSuccessful;
@property (nonatomic, readonly) long long registrationError;
@property (nonatomic, readonly) long long circleStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithRegistrationType:(int)arg1 serviceIdentifier:(id)arg2 wasSuccessful:(_Bool)arg3 registrationError:(long long)arg4 circleStatus:(long long)arg5;

@end
