/*
 Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

#import <KnowledgeGraphKit/MANode.h>

@class NSData, NSDate, NSString;

@protocol PVFaceProtocol;

@interface PVLibraryGraphNode : MANode

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *localIdentifier;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) unsigned long long estimatedAssetCount;
@property (nonatomic, readonly) struct CLLocationCoordinate2D approximateCoordinate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *localIdentifier;
@property (nonatomic, readonly) NSString *personLocalIdentifier;
@property (nonatomic, readonly) double size;
@property (nonatomic, readonly) double centerX;
@property (nonatomic, readonly) double centerY;
@property (nonatomic, readonly) long long clusterSequenceNumber;
@property (nonatomic, readonly) NSData *faceprintData;
@property (nonatomic) long long qualityMeasure;
@property (nonatomic, readonly) unsigned short ageType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *localIdentifier;
@property (nonatomic, readonly) unsigned long long faceCount;
@property (nonatomic, readonly) _Bool favorite;
@property (nonatomic, readonly) _Bool hidden;
@property (nonatomic, readonly) NSString *anonymizedName;
@property (nonatomic, readonly) long long verifiedType;
@property (nonatomic) _Bool isVerified;
@property (nonatomic) long long manualOrder;
@property (retain, nonatomic) id <PVFaceProtocol> keyFace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *localIdentifier;
@property (nonatomic, readonly) NSString *cloudIdentifier;
@property (nonatomic, readonly) NSString *filename;
@property (nonatomic, readonly) NSString *originalFilename;
@property (nonatomic, readonly) unsigned long long pixelWidth;
@property (nonatomic, readonly) unsigned long long pixelHeight;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) struct CLLocationCoordinate2D locationCoordinate;
@property (nonatomic, readonly) NSData *distanceIdentity;
@property (nonatomic, readonly) NSDate *clsDistanceIdentity;
@property (readonly) NSString *localIdentifier;

+ (double)timeIntervalForDate:(id)arg1;
+ (id)dateForTimeInterval:(double)arg1;

- (unsigned long long)type;
- (_Bool)isDirty;
- (id)dateCreated;
- (unsigned long long)faceCountInFaceGroup;
- (id)personLocalIdentifiers;
- (void)pv_addMergeCandidatePersons:(id)arg1;

@end
