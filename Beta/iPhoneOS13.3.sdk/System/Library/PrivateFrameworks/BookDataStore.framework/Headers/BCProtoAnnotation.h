/*
 Image: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
 */

#import <ProtocolBuffer/PBCodable.h>

@class BCAnnotationRange, NSData, NSString;

@interface BCProtoAnnotation : PBCodable

{
    double _creationDate;
    double _locationModificationDate;
    double _modificationDate;
    double _userModificationDate;
    NSString *_annotationVersion;
    NSString *_assetVersion;
    NSString *_attachments;
    NSString *_chapterTitle;
    NSString *_creatorIdentifier;
    NSString *_futureProofing11;
    NSString *_futureProofing12;
    NSString *_locationCFIString;
    NSString *_note;
    NSString *_physicalPageNumber;
    int _plAbsolutePhysicalLocation;
    int _plLocationRangeEnd;
    int _plLocationRangeStart;
    NSString *_plLocationStorageUUID;
    NSData *_plUserData;
    float _readingProgress;
    float _readingProgressHighWaterMark;
    NSString *_representativeText;
    NSString *_selectedText;
    BCAnnotationRange *_selectedTextRange;
    unsigned int _style;
    unsigned int _type;
    NSString *_uuid;
    _Bool _deleted;
    _Bool _isUnderline;
    _Bool _spineIndexUpdated;
    struct {
        unsigned int locationModificationDate:1;
        unsigned int userModificationDate:1;
        unsigned int plAbsolutePhysicalLocation:1;
        unsigned int plLocationRangeEnd:1;
        unsigned int plLocationRangeStart:1;
        unsigned int readingProgress:1;
        unsigned int readingProgressHighWaterMark:1;
        unsigned int style:1;
        unsigned int type:1;
        unsigned int deleted:1;
        unsigned int isUnderline:1;
        unsigned int spineIndexUpdated:1;
    } _has;
}

@property (nonatomic) double creationDate;
@property (retain, nonatomic) NSString *creatorIdentifier;
@property (nonatomic) _Bool hasDeleted;
@property (nonatomic) _Bool deleted;
@property (nonatomic) _Bool hasIsUnderline;
@property (nonatomic) _Bool isUnderline;
@property (nonatomic, readonly) _Bool hasLocationCFIString;
@property (retain, nonatomic) NSString *locationCFIString;
@property (nonatomic) double modificationDate;
@property (nonatomic, readonly) _Bool hasNote;
@property (retain, nonatomic) NSString *note;
@property (nonatomic, readonly) _Bool hasRepresentativeText;
@property (retain, nonatomic) NSString *representativeText;
@property (nonatomic, readonly) _Bool hasSelectedText;
@property (retain, nonatomic) NSString *selectedText;
@property (nonatomic) _Bool hasStyle;
@property (nonatomic) unsigned int style;
@property (nonatomic) _Bool hasType;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *uuid;
@property (nonatomic, readonly) _Bool hasPhysicalPageNumber;
@property (retain, nonatomic) NSString *physicalPageNumber;
@property (nonatomic, readonly) _Bool hasAnnotationVersion;
@property (retain, nonatomic) NSString *annotationVersion;
@property (nonatomic, readonly) _Bool hasAssetVersion;
@property (retain, nonatomic) NSString *assetVersion;
@property (nonatomic, readonly) _Bool hasAttachments;
@property (retain, nonatomic) NSString *attachments;
@property (nonatomic, readonly) _Bool hasChapterTitle;
@property (retain, nonatomic) NSString *chapterTitle;
@property (nonatomic) _Bool hasUserModificationDate;
@property (nonatomic) double userModificationDate;
@property (nonatomic, readonly) _Bool hasSelectedTextRange;
@property (retain, nonatomic) BCAnnotationRange *selectedTextRange;
@property (nonatomic) _Bool hasReadingProgressHighWaterMark;
@property (nonatomic) float readingProgressHighWaterMark;
@property (nonatomic) _Bool hasSpineIndexUpdated;
@property (nonatomic) _Bool spineIndexUpdated;
@property (nonatomic) _Bool hasReadingProgress;
@property (nonatomic) float readingProgress;
@property (nonatomic, readonly) _Bool hasFutureProofing11;
@property (retain, nonatomic) NSString *futureProofing11;
@property (nonatomic, readonly) _Bool hasFutureProofing12;
@property (retain, nonatomic) NSString *futureProofing12;
@property (nonatomic) _Bool hasPlAbsolutePhysicalLocation;
@property (nonatomic) int plAbsolutePhysicalLocation;
@property (nonatomic) _Bool hasPlLocationRangeEnd;
@property (nonatomic) int plLocationRangeEnd;
@property (nonatomic) _Bool hasPlLocationRangeStart;
@property (nonatomic) int plLocationRangeStart;
@property (nonatomic, readonly) _Bool hasPlLocationStorageUUID;
@property (retain, nonatomic) NSString *plLocationStorageUUID;
@property (nonatomic, readonly) _Bool hasPlUserData;
@property (retain, nonatomic) NSData *plUserData;
@property (nonatomic) _Bool hasLocationModificationDate;
@property (nonatomic) double locationModificationDate;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
