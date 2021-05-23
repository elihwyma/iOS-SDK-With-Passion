/*
 Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

#import <NSObject.h>

@class NSArray, NSString;

@interface VCIntentDefinitionChange : NSObject

{
    NSString *_objectIdentifier;
    long long _changeType;
    NSString *_checksum;
    NSArray *_files;
}

@property (copy, nonatomic) NSArray *files;
@property (copy, nonatomic, readonly) NSString *checksum;
@property (nonatomic) long long changeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *objectIdentifier;
@property (nonatomic, readonly) NSString *sequencer;

+ (int)messageType;

- (_Bool)writeTo:(id)arg1 error:(id *)arg2;
- (_Bool)readFrom:(id)arg1 error:(id *)arg2;
- (id)initWithObjectIdentifier:(id)arg1 changeType:(long long)arg2;
- (id)initWithApplicationProxy:(id)arg1 changeType:(long long)arg2;

@end
