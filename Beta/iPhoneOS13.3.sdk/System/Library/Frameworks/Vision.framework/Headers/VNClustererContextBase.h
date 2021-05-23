/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface VNClustererContextBase : NSObject

{
    NSString *_type;
    NSNumber *_threshold;
    NSNumber *_torsoThreshold;
    NSString *_cacheDirectoryPath;
    _Bool _readOnly;
    unsigned long long _requestRevision;
}

+ (id)_faceprintRevision1ModelPathAndReturnError:(id *)arg1;
+ (id)_faceprintRevision2ModelPathAndReturnError:(id *)arg1;
+ (id)_ageClassifierPathForFaceprintRequestRevision:(unsigned long long)arg1 error:(id *)arg2;

- (_Bool)_checkInitInputs:(id)arg1 cachePath:(id)arg2 checkType:(id)arg3 requestRevision:(unsigned long long)arg4 error:(id *)arg5;
- (id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 readOnly:(_Bool)arg4 threshold:(float)arg5 requestRevision:(unsigned long long)arg6 error:(id *)arg7;
- (id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 readOnly:(_Bool)arg4 threshold:(float)arg5 torsoThreshold:(float)arg6 requestRevision:(unsigned long long)arg7 error:(id *)arg8;
- (id)_createGreedyClusterer:(Class)arg1 state:(id)arg2 error:(id *)arg3;
- (void)_initializeGreedyClustererOptions:(id)arg1;

@end
