/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate;

@protocol MiroVPMetadataRangeMergeable;

__attribute__((visibility("hidden")))
@interface MiroVPAnalysisInfo : NSObject

{
    unsigned long long _flags;
    long long _analysisVersion;
    unsigned long long _performedAnalysisTypes;
    NSDate *_performedAnalysisDate;
    double _qualityScore;
    double _junkScore;
    NSArray<MiroVPMetadataRangeMergeable> *_ranges;
    id context;
}

@property (nonatomic, readonly) unsigned long long flags;
@property (nonatomic, readonly) long long analysisVersion;
@property (nonatomic, readonly) unsigned long long performedAnalysisTypes;
@property (nonatomic, readonly) NSDate *performedAnalysisDate;
@property (nonatomic, readonly) double qualityScore;
@property (nonatomic, readonly) double junkScore;
@property (nonatomic, readonly) NSArray<MiroVPMetadataRangeMergeable> *ranges;
@property (retain, nonatomic) id context;

+ (id)descriptionForAnalysisTypes:(unsigned long long)arg1;
+ (id)analysisInfoWithFlags:(unsigned long long)arg1 analysisVersion:(long long)arg2 performedAnalysisTypes:(unsigned long long)arg3 performedAnalysisDate:(id)arg4 qualityScore:(double)arg5 junkScore:(double)arg6 ranges:(id)arg7;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
