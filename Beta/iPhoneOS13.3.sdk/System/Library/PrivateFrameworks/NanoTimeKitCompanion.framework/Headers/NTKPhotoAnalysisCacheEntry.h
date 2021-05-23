/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NTKPhotoAnalysis;

@interface NTKPhotoAnalysisCacheEntry : NSObject

{
    NTKPhotoAnalysis *_analysis;
    int _sequenceNumber;
}

@property (retain, nonatomic) NTKPhotoAnalysis *analysis;
@property (nonatomic) int sequenceNumber;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
