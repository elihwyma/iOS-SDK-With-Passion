/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudDocsDaemon/BRCStatInfo.h>

@class BRCGenerationID, BRFileObjectID, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface BRCLocalStatInfo : BRCStatInfo

{
    NSNumber *_processingStamp;
    NSString *_bouncedLogicalName;
    unsigned char _itemScope;
    unsigned int _stagedGenerationID;
    NSNumber *_documentID;
    NSNumber *_fileID;
    BRCGenerationID *_generationID;
    NSNumber *_stagedFileID;
    NSString *_physicalName;
    NSNumber *_tmpBouncedNo;
}

@property (nonatomic) unsigned char itemScope;
@property (nonatomic, readonly) NSNumber *documentID;
@property (nonatomic, readonly) NSNumber *fileID;
@property (nonatomic, readonly) BRCGenerationID *generationID;
@property (nonatomic, readonly) NSNumber *stagedFileID;
@property (nonatomic, readonly) NSNumber *stagedFileIDForDB;
@property (nonatomic, readonly) unsigned int stagedGenerationID;
@property (nonatomic, readonly) NSString *physicalName;
@property (nonatomic, readonly) NSString *filename;
@property (nonatomic, readonly) NSNumber *tmpBouncedNo;
@property (nonatomic, readonly) NSNumber *lostStamp;
@property (nonatomic, readonly) BRFileObjectID *fileObjectID;
@property (nonatomic, readonly) NSNumber *processingStamp;
@property (nonatomic, readonly) NSString *logicalNameWithoutLocalBounce;
@property (nonatomic, readonly) NSString *rawBouncedLogicalName;

+ (_Bool)supportsSecureCoding;
+ (id)_finderTagsFromRelativePath:(id)arg1;
+ (BOOL)_modeFromRelativePath:(id)arg1 isPackageFault:(_Bool)arg2;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setFilename:(id)arg1;
- (id)logicalName;
- (void)_setParentID:(id)arg1;
- (id)descriptionWithContext:(id)arg1 origName:(id)arg2;
- (_Bool)checkStateWithItemID:(id)arg1 logToFile:(struct __sFILE *)arg2;
- (id)initFromResultSet:(id)arg1 pos:(int)arg2;
- (id)initAsShareAcceptFaultWithName:(id)arg1 mode:(BOOL)arg2;
- (void)_markLiveFromStageAsType:(BOOL)arg1;
- (void)updateFromFSAtPath:(id)arg1 itemID:(id)arg2 parentGlobalID:(id)arg3 isPackageFault:(_Bool)arg4 readonlyShareChild:(_Bool)arg5;
- (id)initWithLocalStatInfo:(id)arg1;
- (void)setFilename:(id)arg1 forcePhysicalName:(id)arg2 serverName:(id)arg3;
- (void)_updateMetadataFromFSAtPath:(id)arg1 itemID:(id)arg2 parentGlobalID:(id)arg3 isPackageFault:(_Bool)arg4 readonlyShareChild:(_Bool)arg5;
- (id)initWithRelativePath:(id)arg1 itemID:(id)arg2 parentGlobalID:(id)arg3;
- (void)_setItemScope:(unsigned char)arg1;
- (void)_setCKInfo:(id)arg1;
- (void)_markClearedFromStage;
- (void)_moveItemAsideWithUUIDString;
- (void)_generatedBouncedLogicalFilenameWithBounceNumber:(unsigned long long)arg1;
- (void)_migrateTmpBouncedNameToLocalName;
- (void)_bouncePhysicalNameToRepresentableName;
- (void)_clearBouncedName;
- (unsigned long long)diffAgainstLocalInfo:(id)arg1;
- (void)updateLocationAndMetaFromFSAtPath:(id)arg1 itemID:(id)arg2 parentGlobalID:(id)arg3 isPackageFault:(_Bool)arg4 readonlyShareChild:(_Bool)arg5;
- (void)_markReserved;
- (void)_markAlmostDead;
- (void)updateAsAppLibraryRoot:(id)arg1;
- (void)_markDead;
- (void)_markFound;
- (void)_markLostAddingBackoffWithMode:(unsigned char)arg1 appLibrary:(id)arg2;
- (void)_markStagedWithFileID:(id)arg1 generationID:(unsigned int)arg2 documentID:(id)arg3;
- (void)_updateStatMeta:(id)arg1;
- (void)_markLiveFromStageAsFault:(_Bool)arg1;
- (void)_clearFileID;
- (void)_clearGenerationID;

@end
