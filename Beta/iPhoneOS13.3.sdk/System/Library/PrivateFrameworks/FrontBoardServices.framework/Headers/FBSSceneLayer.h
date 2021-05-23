/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <Foundation/NSObject.h>

@class CAContext, NSString;

@interface FBSSceneLayer : NSObject

{
    CAContext *_context;
    double _level;
}

@property (nonatomic, readonly, getter=_context) CAContext *context;
@property (nonatomic, readonly) long long alignment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)_unsafe_captureLevel;
- (double)_unsafe_level;
- (id)_initWithCAContext:(id)arg1 fallbackLevel:(double)arg2;
- (id)_succinctDescription;
- (_Bool)isCAContextLayer;
- (_Bool)isExternalSceneLayer;

@end
