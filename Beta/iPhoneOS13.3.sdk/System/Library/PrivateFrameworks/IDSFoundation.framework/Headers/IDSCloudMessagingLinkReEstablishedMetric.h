/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, PBCodable;

@protocol NSCopying;

@interface IDSCloudMessagingLinkReEstablishedMetric : NSObject

{
    double _inactiveTime;
    unsigned long long _linkType;
    unsigned long long _priorLinkType;
}

@property (nonatomic, readonly) NSString *name;
@property (readonly) unsigned int awdIdentifier;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) PBCodable<NSCopying> *awdRepresentation;
@property (nonatomic, readonly) double inactiveTime;
@property (nonatomic, readonly) unsigned long long linkType;
@property (nonatomic, readonly) unsigned long long priorLinkType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithInactiveTime:(double)arg1 linkType:(unsigned long long)arg2 priorLinkType:(unsigned long long)arg3;

@end
