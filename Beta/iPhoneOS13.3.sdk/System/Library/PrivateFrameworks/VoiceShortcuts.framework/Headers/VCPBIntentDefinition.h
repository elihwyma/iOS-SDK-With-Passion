/*
 Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

#import <PBCodable.h>

#import <VoiceShortcuts/Swift-Protocol.h>

@class NSMutableArray, NSString;

@interface VCPBIntentDefinition : PBCodable <Swift>

{
    NSString *_associatedBundleID;
    NSMutableArray *_files;
}

@property (retain, nonatomic) NSString *associatedBundleID;
@property (retain, nonatomic) NSMutableArray *files;

+ (Class)filesType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addFiles:(id)arg1;
- (void)clearFiles;
- (unsigned long long)filesCount;
- (id)filesAtIndex:(unsigned long long)arg1;

@end
