/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NURenderJob.h>

@class NSArray, NUSubjectDetectionRequest;

@interface NUSubjectDetectionJob : NURenderJob

{
    NSArray *_observations;
}

@property (nonatomic, readonly) NUSubjectDetectionRequest *subjectDetectionRequest;
@property (copy, nonatomic) NSArray *observations;

- (id)result;
- (_Bool)render:(out id *)arg1;
- (id)initWithRequest:(id)arg1;
- (void)cleanUp;
- (_Bool)wantsCompleteStage;
- (_Bool)wantsOutputGeometry;
- (_Bool)wantsOutputImage;
- (id)scalePolicy;
- (id)initWithSubjectDetectionRequest:(id)arg1;
- (id)subjectsInImage:(id)arg1 error:(out id *)arg2;

@end
