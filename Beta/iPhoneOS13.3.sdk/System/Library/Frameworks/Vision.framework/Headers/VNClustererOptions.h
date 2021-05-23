/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface VNClustererOptions : NSObject

{
    float _threshold;
    float _torsoThreshold;
    NSString *_type;
    NSString *_cachePath;
    NSData *_state;
    unsigned long long _requestRevision;
}

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *cachePath;
@property (retain, nonatomic) NSData *state;
@property (nonatomic) float threshold;
@property (nonatomic) float torsoThreshold;
@property (nonatomic) unsigned long long requestRevision;

- (id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4 requestRevision:(unsigned long long)arg5;
- (id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4 torsoThreshold:(float)arg5 requestRevision:(unsigned long long)arg6;
- (id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4;
- (id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4 torsoThreshold:(float)arg5;

@end
