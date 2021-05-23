/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <FrontBoardServices/FBSSceneLayer.h>

@class NSString;

@interface FBSExternalSceneLayer : FBSSceneLayer

{
    NSString *_sceneID;
}

@property (copy, nonatomic, readonly) NSString *sceneID;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (long long)alignment;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)initWithExternalSceneID:(id)arg1 trackingContext:(id)arg2;
- (id)_succinctDescription;
- (id)_initWithCAContext:(id)arg1 fallbackLevel:(double)arg2 sceneID:(id)arg3;
- (id)initWithExternalSceneID:(id)arg1 level:(double)arg2;
- (_Bool)isExternalSceneLayer;

@end
