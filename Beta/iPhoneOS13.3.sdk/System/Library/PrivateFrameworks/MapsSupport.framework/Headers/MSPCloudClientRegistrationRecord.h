/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <Foundation/NSObject.h>

@class NSDate, NSUUID;

@interface MSPCloudClientRegistrationRecord : NSObject

{
    _Bool _isChanged;
    NSDate *_lastRegistrationDate;
    NSUUID *_clientIdentifier;
    unsigned long long _desiredEpoch;
    unsigned long long _earliestCompatibleEpoch;
}

@property (retain, nonatomic) NSUUID *clientIdentifier;
@property (nonatomic) unsigned long long desiredEpoch;
@property (nonatomic) unsigned long long earliestCompatibleEpoch;
@property (nonatomic, readonly) _Bool isChanged;
@property (retain, nonatomic) NSDate *lastRegistrationDate;

- (id)initWithRecord:(id)arg1;
- (id)initWithClientIdentifier:(id)arg1;
- (id)recordRepresentation;

@end
