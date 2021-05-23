/*
 Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

#import <MTLModel.h>

@class NSDictionary, NSNumber, NSString, NSUUID;

@interface VCIntentDefinitionSyncState : MTLModel

{
    NSUUID *_databaseUUID;
    NSNumber *_sequenceNumber;
    NSDictionary *_applications;
}

@property (copy, nonatomic) NSUUID *databaseUUID;
@property (copy, nonatomic) NSNumber *sequenceNumber;
@property (copy, nonatomic) NSDictionary *applications;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSDictionary *dictionaryValue;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)applicationsJSONTransformer;

@end
