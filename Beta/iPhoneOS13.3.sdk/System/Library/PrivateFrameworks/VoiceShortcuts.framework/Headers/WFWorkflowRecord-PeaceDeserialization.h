/*
 Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

#import <WFWorkflowRecord.h>

#import <VoiceShortcuts/Swift-Protocol.h>

@class NSString;

@interface WFWorkflowRecord (PeaceDeserialization) <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)loadFromPeaceData:(id)arg1 keyImageData:(id)arg2 error:(id *)arg3;
- (id)initWithPeaceCloudKitRecord:(id)arg1 error:(id *)arg2;
- (id)initWithPeaceCoreDataModel:(id)arg1 error:(id *)arg2;
- (_Bool)writeTo:(id)arg1 error:(id *)arg2;
- (_Bool)readFrom:(id)arg1 error:(id *)arg2;

@end
