/*
 Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

typedef void (^CDUnknownBlockType)(void);

struct CGSize {
    double _field1;
    double _field2;
};

typedef struct {
    unsigned int pushDataProvider:1;
    unsigned int dataProviderDidLoad:1;
    unsigned int bulletinsWithRequestParameters:1;
    unsigned int bulletinsFilteredByDEPRECATED:1;
    unsigned int bulletinsFilteredByEnabledSectionsDEPRECATED:1;
    unsigned int clearedInfoForBulletins:1;
    unsigned int clearedInfoAndBulletinsForClearingAllBulletins:1;
    unsigned int clearedInfoAndBulletinsForClearingBulletinsByDate:1;
    unsigned int clearedInfoForBulletinsDEPRECATED:1;
    unsigned int defaultSectionInfo:1;
    unsigned int defaultSubsectionInfos:1;
    unsigned int displayNameForSubsectionID:1;
    unsigned int sectionParameters:1;
    unsigned int migrateSectionInfo:1;
    unsigned int sectionDisplayName:1;
    unsigned int sectionIcon:1;
    unsigned int sectionIconDataDEPRECATED:1;
    unsigned int receiveMessageWithName:1;
    unsigned int noteSectionInfoDidChange:1;
    unsigned int syncBulletinDismissal:1;
    unsigned int handleBulletinActionResponse:1;
    unsigned int handleBulletinActionResponseWithCompletion:1;
    unsigned int universalSectionIdentifier:1;
    unsigned int parentSectionIdentifier:1;
} CDStruct_0e6e99aa;
