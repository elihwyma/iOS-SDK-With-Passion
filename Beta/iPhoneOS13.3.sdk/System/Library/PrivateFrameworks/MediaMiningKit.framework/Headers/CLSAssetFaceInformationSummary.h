/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <Foundation/NSObject.h>

@interface CLSAssetFaceInformationSummary : NSObject

{
    unsigned short _numberOfFaces;
    unsigned short _numberOfFacesOfVerifiedPersons;
    unsigned short _numberOfGoodFaces;
    unsigned short _numberOfGoodFacesOfVerifiedPersons;
    double _averageFaceQuality;
    double _averageFaceQualityOfVerifiedPersons;
}

@property (nonatomic, readonly) unsigned short numberOfFaces;
@property (nonatomic, readonly) unsigned short numberOfFacesOfVerifiedPersons;
@property (nonatomic, readonly) unsigned short numberOfGoodFaces;
@property (nonatomic, readonly) unsigned short numberOfGoodFacesOfVerifiedPersons;
@property (nonatomic, readonly) double averageFaceQuality;
@property (nonatomic, readonly) double averageFaceQualityOfVerifiedPersons;

- (id)initWithNumberOfFaces:(unsigned long long)arg1 numberOfFacesOfVerifiedPersons:(unsigned long long)arg2 numberOfGoodFaces:(unsigned long long)arg3 numberOfGoodFacesOfVerifiedPersons:(unsigned long long)arg4 averageFaceQuality:(double)arg5 averageFaceQualityOfVerifiedPersons:(double)arg6;

@end
