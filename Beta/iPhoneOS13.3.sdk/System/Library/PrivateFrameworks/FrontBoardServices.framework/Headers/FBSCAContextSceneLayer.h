/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <FrontBoardServices/FBSSceneLayer.h>

@class CAContext;

@interface FBSCAContextSceneLayer : FBSSceneLayer

{
    unsigned int _contextID;
}

@property (nonatomic, readonly) CAContext *CAContext;
@property (nonatomic, readonly) unsigned int contextID;

+ (id)layerWithCAContext:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)initWithCAContext:(id)arg1;
- (id)_initWithCAContext:(id)arg1 contextID:(unsigned int)arg2 fallbackLevel:(double)arg3;
- (id)initWithCAContextID:(unsigned int)arg1 level:(double)arg2;
- (id)_succinctDescription;
- (_Bool)isCAContextLayer;

@end
