/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, PBCodable;

@protocol NSCopying;

@interface IDSLocalMessageSentMetric : NSObject

{
    NSString *_service;
    _Bool _isToDefaultPairedDevice;
    long long _messageSize;
    unsigned long long _linkType;
    long long _priority;
}

@property (nonatomic, readonly) NSString *name;
@property (readonly) unsigned int awdIdentifier;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) PBCodable<NSCopying> *awdRepresentation;
@property (nonatomic, readonly) NSString *service;
@property (nonatomic, readonly) _Bool isToDefaultPairedDevice;
@property (nonatomic, readonly) long long messageSize;
@property (nonatomic, readonly) unsigned long long linkType;
@property (nonatomic, readonly) long long priority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithService:(id)arg1 isToDefaultPairedDevice:(_Bool)arg2 messageSize:(long long)arg3 linkType:(unsigned long long)arg4 priority:(long long)arg5;

@end
