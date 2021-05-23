/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/Swift-Protocol.h>

@class NSDate, NSSet;

@protocol PLSyncablePerson;

@protocol PLSyncableDetectedFace <Swift>

@property (nonatomic) double centerX;
@property (nonatomic) double centerY;
@property (nonatomic) double size;
@property (nonatomic) int faceAlgorithmVersion;
@property (copy, nonatomic) NSDate *adjustmentVersion;
@property (retain, nonatomic) id <PLSyncablePerson> person;
@property (retain, nonatomic) NSSet *rejectedPersons;
@property (retain, nonatomic) id <PLSyncablePerson> personBeingKeyFace;
@property (nonatomic) long long sourceWidth;
@property (nonatomic) long long sourceHeight;
@property (nonatomic, readonly) _Bool isTrainingFace;
@property (nonatomic) _Bool manual;
@property (nonatomic) _Bool hidden;
@property (nonatomic) int nameSource;
@property (nonatomic) int cloudNameSource;
@property (nonatomic) int trainingType;
@property (nonatomic) short cloudLocalState;

- (unsigned short)pointerDescription;
- (unsigned short)syncDescription;

@end
