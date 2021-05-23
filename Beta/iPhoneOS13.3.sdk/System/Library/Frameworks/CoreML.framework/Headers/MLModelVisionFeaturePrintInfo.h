/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <NSObject.h>

@class MLModel;

@interface MLModelVisionFeaturePrintInfo : NSObject

{
    long long _version;
    MLModel *_postVisionFeaturePrintModel;
}

@property (nonatomic) long long version;
@property (retain, nonatomic) MLModel *postVisionFeaturePrintModel;

@end
