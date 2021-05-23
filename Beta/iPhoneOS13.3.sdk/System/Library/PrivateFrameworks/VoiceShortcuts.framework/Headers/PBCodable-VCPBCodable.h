/*
 Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

#import <PBCodable.h>

#import <VoiceShortcuts/Swift-Protocol.h>

@class NSString;

@interface PBCodable (VCPBCodable) <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)writeTo:(id)arg1 error:(id *)arg2;
- (_Bool)readFrom:(id)arg1 error:(id *)arg2;

@end
