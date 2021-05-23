/*
 Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, NSString;

@interface VVVerifier : NSObject

{
    NSMutableDictionary *_checkpointDictionary;
    NSArray *_keyDescriptions;
    NSString *_serviceIdentifier;
}

@property (copy, nonatomic, readonly) NSString *serviceIdentifier;

+ (id)homeDirectory;

- (id)configurationDictionary;
- (id)initWithServiceIdentifier:(id)arg1;
- (id)_checkpointDictionaryFilePath;
- (id)keyDescriptions;
- (id)_checkpointDictionary;
- (void)_saveCheckpointDictionary;
- (_Bool)valueForCheckpointKey:(id)arg1 exists:(_Bool *)arg2;
- (void)_mapFromSourceDictionary:(id)arg1 destinationDictionary:(id)arg2 inKey:(id)arg3 outDescription:(id)arg4;
- (void)storeValue:(_Bool)arg1 forCheckpointKey:(id)arg2;
- (id)readableError;
- (void)_checkpointDictionaryChanged;
- (id)humanReadableConfigurationDictionary:(id *)arg1;

@end
