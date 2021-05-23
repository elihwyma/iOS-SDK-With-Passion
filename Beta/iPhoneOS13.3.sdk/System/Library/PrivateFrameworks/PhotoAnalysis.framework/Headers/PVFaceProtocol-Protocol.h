/*
 Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

#import <PhotoAnalysis/Swift-Protocol.h>

@class NSData, NSString;

@protocol PVFaceProtocol <Swift>

@property (nonatomic, readonly) NSString *localIdentifier;
@property (nonatomic, readonly) NSString *personLocalIdentifier;
@property (nonatomic, readonly) double size;
@property (nonatomic, readonly) double centerX;
@property (nonatomic, readonly) double centerY;
@property (nonatomic, readonly) long long clusterSequenceNumber;
@property (nonatomic, readonly) NSData *faceprintData;
@property (nonatomic) long long qualityMeasure;
@property (nonatomic, readonly) unsigned short ageType;

@end
