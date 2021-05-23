/*
 Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

#import <Foundation/NSObject.h>

@class MLModel, MLModelAsset;

@interface SSCoreMLInterface : NSObject

{
    MLModelAsset *asset;
    MLModel *model;
}

- (id)getDescription;
- (id)initWithURL:(id)arg1 error:(id *)arg2;
- (id)getVersionString;
- (id)initSpecificModel:(id)arg1 error:(id *)arg2;
- (float)predict:(id)arg1 error:(id *)arg2;

@end
