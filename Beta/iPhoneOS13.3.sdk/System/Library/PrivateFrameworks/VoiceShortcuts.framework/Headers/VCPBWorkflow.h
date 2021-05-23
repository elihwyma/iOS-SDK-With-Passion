/*
 Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

#import <PBCodable.h>

#import <VoiceShortcuts/Swift-Protocol.h>

@class NSData, NSMutableArray, NSString;

@interface VCPBWorkflow : PBCodable <Swift>

{
    double _creationDate;
    unsigned long long _integerLastMigratedClientVersion;
    unsigned long long _integerMinimumClientVersion;
    double _modificationDate;
    NSData *_accessResourcePerWorkflowStateData;
    NSData *_actionsData;
    unsigned int _iconColor;
    unsigned int _iconGlyph;
    NSData *_importQuestionsData;
    NSMutableArray *_inputClasses;
    NSString *_lastMigratedClientVersion;
    NSString *_minimumClientVersion;
    NSString *_name;
    int _remoteQuarantineStatus;
    NSMutableArray *_workflowTypes;
    struct {
        unsigned int creationDate:1;
        unsigned int integerLastMigratedClientVersion:1;
        unsigned int integerMinimumClientVersion:1;
        unsigned int modificationDate:1;
        unsigned int iconColor:1;
        unsigned int iconGlyph:1;
        unsigned int remoteQuarantineStatus:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasName;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) _Bool hasIconColor;
@property (nonatomic) unsigned int iconColor;
@property (nonatomic) _Bool hasIconGlyph;
@property (nonatomic) unsigned int iconGlyph;
@property (nonatomic) _Bool hasCreationDate;
@property (nonatomic) double creationDate;
@property (nonatomic) _Bool hasModificationDate;
@property (nonatomic) double modificationDate;
@property (retain, nonatomic) NSMutableArray *workflowTypes;
@property (retain, nonatomic) NSMutableArray *inputClasses;
@property (nonatomic, readonly) _Bool hasActionsData;
@property (retain, nonatomic) NSData *actionsData;
@property (nonatomic, readonly) _Bool hasImportQuestionsData;
@property (retain, nonatomic) NSData *importQuestionsData;
@property (nonatomic) _Bool hasIntegerMinimumClientVersion;
@property (nonatomic) unsigned long long integerMinimumClientVersion;
@property (nonatomic) _Bool hasIntegerLastMigratedClientVersion;
@property (nonatomic) unsigned long long integerLastMigratedClientVersion;
@property (nonatomic, readonly) _Bool hasMinimumClientVersion;
@property (retain, nonatomic) NSString *minimumClientVersion;
@property (nonatomic, readonly) _Bool hasLastMigratedClientVersion;
@property (retain, nonatomic) NSString *lastMigratedClientVersion;
@property (nonatomic, readonly) _Bool hasAccessResourcePerWorkflowStateData;
@property (retain, nonatomic) NSData *accessResourcePerWorkflowStateData;
@property (nonatomic) _Bool hasRemoteQuarantineStatus;
@property (nonatomic) int remoteQuarantineStatus;

+ (Class)workflowTypesType;
+ (Class)inputClassesType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)clearWorkflowTypes;
- (void)addWorkflowTypes:(id)arg1;
- (unsigned long long)workflowTypesCount;
- (id)workflowTypesAtIndex:(unsigned long long)arg1;
- (void)clearInputClasses;
- (void)addInputClasses:(id)arg1;
- (unsigned long long)inputClassesCount;
- (id)inputClassesAtIndex:(unsigned long long)arg1;
- (id)remoteQuarantineStatusAsString:(int)arg1;
- (int)StringAsRemoteQuarantineStatus:(id)arg1;

@end
