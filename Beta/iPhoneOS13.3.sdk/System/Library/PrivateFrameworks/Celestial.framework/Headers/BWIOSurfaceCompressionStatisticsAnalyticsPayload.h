/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class NSString;

@interface BWIOSurfaceCompressionStatisticsAnalyticsPayload : NSObject

{
    float _averageRatio;
    float _minRatio;
    float _maxRatio;
    float _standardDeviation;
    int _compressionType;
    unsigned int _bufferHeight;
    unsigned int _numberOfSamples;
    unsigned long long _totalCompressedSize;
    unsigned long long _totalUncompressedSize;
}

@property (nonatomic) float averageRatio;
@property (nonatomic) float minRatio;
@property (nonatomic) float maxRatio;
@property (nonatomic) float standardDeviation;
@property (nonatomic) int compressionType;
@property (nonatomic) unsigned int bufferHeight;
@property (nonatomic) unsigned int numberOfSamples;
@property (nonatomic) unsigned long long totalCompressedSize;
@property (nonatomic) unsigned long long totalUncompressedSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)reset;
- (id)eventName;
- (id)eventDictionary;

@end
