/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface BLTPBFileURLMetaData : NSObject

{
    NSDictionary *_metadata;
    long long _sequenceNumberError;
    unsigned long long _sessionState;
    NSDictionary *_extraMetadata;
}

@property (nonatomic, readonly) NSDictionary *metadata;
@property (nonatomic, readonly) long long sequenceNumberError;
@property (nonatomic, readonly) unsigned long long sessionState;
@property (nonatomic, readonly) NSDictionary *extraMetadata;

- (id)initWithSequenceNumberManager:(id)arg1 extraMetadata:(id)arg2;
- (id)initWithMetadata:(id)arg1 sequenceNumberManager:(id)arg2;

@end
