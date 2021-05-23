/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

@class NSString, PPSource;

@protocol PPRecord

@property (nonatomic, readonly) PPSource *source;
@property (nonatomic, readonly) double initialScore;
@property (nonatomic, readonly) NSString *extractionOsBuild;
@property (nonatomic, readonly) unsigned long long extractionAssetVersion;

@end
