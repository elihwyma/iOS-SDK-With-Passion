/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

#import <GeoServices/Swift-Protocol.h>

@class GEOPBTransitRoutingIncidentMessage, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _GEOTransitRoutingIncidentMessage : NSObject <Swift>

{
    GEOPBTransitRoutingIncidentMessage *_routingIncidentMessage;
    NSArray *_transitIncidents;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *routingMessage;
@property (nonatomic, readonly) NSArray *transitIncidents;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIncidentMessage:(id)arg1 decoderData:(id)arg2;
- (id)initWithIncidentMessageIndex:(unsigned long long)arg1 decoderData:(id)arg2;
- (void)_populateTransitIncidentsWithDecoderData:(id)arg1;
- (id)_fakeTransitLineIncidentInLine:(id)arg1;
- (id)initFakeLineIncidentMessageInLine:(id)arg1;

@end
