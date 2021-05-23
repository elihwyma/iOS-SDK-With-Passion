/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <Foundation/NSObject.h>

@class NSDate, NSMutableDictionary, VNPersonsModel;

@interface AXMVisionFaceNameHelper : NSObject

{
    VNPersonsModel *__personsModel;
    NSDate *__personsModelFileModifiedDate;
    NSMutableDictionary *__personLocalIdentifierToName;
    double __lastFileModificationCheckTime;
}

@property (retain, nonatomic) VNPersonsModel *_personsModel;
@property (nonatomic) NSDate *_personsModelFileModifiedDate;
@property (retain, nonatomic) NSMutableDictionary *_personLocalIdentifierToName;
@property (nonatomic) double _lastFileModificationCheckTime;

- (void)_resetState;
- (_Bool)prepareForLookup;
- (unsigned long long)faceprintRequestRevisionForPersonsModel;
- (id)nameForFaceObservation:(id)arg1;
- (id)_filePathForPersonsModel;
- (id)_fileModificationDateForPath:(id)arg1;
- (_Bool)_isDeviceUnlocked;
- (_Bool)_shouldReloadPersonsModel;
- (_Bool)_checkPhotoLibraryAuthorization;
- (id)_photoAuthorizationMessage:(long long)arg1;
- (void)_loadPersonsModel;
- (id)_fetchPersonsForLocalIdentifiers:(id)arg1;

@end
