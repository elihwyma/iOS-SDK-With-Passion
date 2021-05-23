/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <Foundation/NSObject.h>

#import <FrontBoard/Swift-Protocol.h>

@class NSString;

@interface FBSceneLayer : NSObject <Swift>

{
    long long _type;
    double _level;
    long long _alignment;
    unsigned int _contextID;
    NSString *_externalSceneID;
    unsigned int _sceneID;
}

@property (nonatomic) unsigned int sceneID;
@property (nonatomic) double level;
@property (nonatomic) long long alignment;
@property (copy, nonatomic) NSString *externalSceneID;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) unsigned int contextID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)layerWithFBSSceneLayer:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithContextID:(unsigned int)arg1;
- (id)initWithExternalSceneID:(id)arg1;

@end
