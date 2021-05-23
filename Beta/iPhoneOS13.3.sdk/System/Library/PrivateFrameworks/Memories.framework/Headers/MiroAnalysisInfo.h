/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate;

@protocol MiroMetadataRangeMergeable;

__attribute__((visibility("hidden")))
@interface MiroAnalysisInfo : NSObject

{
    unsigned long long _flags;
    long long _analysisVersion;
    unsigned long long _performedAnalysisTypes;
    NSDate *_performedAnalysisDate;
    double _qualityScore;
    double _junkScore;
    NSArray<MiroMetadataRangeMergeable> *_ranges;
}

@property (nonatomic) unsigned long long flags;
@property (nonatomic) long long analysisVersion;
@property (nonatomic) unsigned long long performedAnalysisTypes;
@property (retain, nonatomic) NSDate *performedAnalysisDate;
@property (nonatomic) double qualityScore;
@property (nonatomic) double junkScore;
@property (retain, nonatomic) NSArray<MiroMetadataRangeMergeable> *ranges;

+ (id)analysisInfo;
+ (id)descriptionForAnalysisTypes:(unsigned long long)arg1;
+ (id)analysisInfoWithVPAnalysisInfo:(id)arg1;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)mergeWith:(id)arg1;

@end
