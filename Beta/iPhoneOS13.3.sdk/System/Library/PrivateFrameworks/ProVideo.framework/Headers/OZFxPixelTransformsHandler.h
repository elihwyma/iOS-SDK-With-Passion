/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface OZFxPixelTransformsHandler : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)setAgent:(const struct LiAgent *)arg1;
- (PCMatrix44Tmpl_93ed1289)pixelTransform;
- (PCMatrix44Tmpl_93ed1289)inversePixelTransform;
- (PCMatrix44Tmpl_93ed1289)destinationPixelTransform;
- (PCMatrix44Tmpl_93ed1289)destinationInversePixelTransform;
- (void)setPreTransform:(const PCMatrix44Tmpl_93ed1289 *)arg1;
- (void)setPostTransform:(const PCMatrix44Tmpl_93ed1289 *)arg1;
- (_Bool)conformsToProtocol:(id)arg1 version:(unsigned int)arg2;

@end
