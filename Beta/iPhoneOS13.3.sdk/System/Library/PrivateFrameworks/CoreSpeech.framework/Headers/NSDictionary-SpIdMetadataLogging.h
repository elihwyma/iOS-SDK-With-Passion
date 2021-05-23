/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSDictionary.h>

@interface NSDictionary (SpIdMetadataLogging)

- (id)speakerIdDetected;
- (void)logSpeakerIdMetadataAtFilepath:(id)arg1 additionalMetadata:(id)arg2;
- (id)_cs_initWithXPCObject:(id)arg1;
- (id)_cs_xpcObject;

@end
