/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <Foundation/NSObject.h>

@class CALayer, NSDictionary, NSString;

@interface CAContext : NSObject

@property (readonly) unsigned int contextId;
@property (retain) CALayer *layer;
@property struct CGColorSpace *colorSpace;
@property unsigned int commitPriority;
@property _Bool colorMatchUntaggedContent;
@property (copy) NSString *contentsFormat;
@property (copy) NSString *annotation;
@property (readonly) NSDictionary *options;
@property float level;
@property (readonly) unsigned int displayId;
@property (getter=isSecure) _Bool secure;
@property float desiredDynamicRange;
@property (readonly) _Bool valid;

+ (id)currentContext;
+ (void)setClientPort:(unsigned int)arg1;
+ (id)remoteContextWithOptions:(id)arg1;
+ (id)localContextWithOptions:(id)arg1;
+ (id)objectForSlot:(unsigned int)arg1;
+ (id)localContext;
+ (id)allContexts;
+ (id)remoteContext;

- (void)invalidate;
- (void)orderAbove:(unsigned int)arg1;
- (void)setFencePort:(unsigned int)arg1 commitHandler:(CDUnknownBlockType)arg2;
- (void)setFencePort:(unsigned int)arg1;
- (unsigned int)createFencePort;
- (unsigned int)createSlot;
- (void)setObject:(id)arg1 forSlot:(unsigned int)arg2;
- (void)deleteSlot:(unsigned int)arg1;
- (unsigned int)createImageSlot:(struct CGSize)arg1 hasAlpha:(_Bool)arg2;
- (void)orderBelow:(unsigned int)arg1;
- (void)setFence:(unsigned int)arg1 count:(unsigned int)arg2;
- (void)invalidateFences;
- (unsigned int)createImageSlot:(struct CGSize)arg1 hasAlpha:(_Bool)arg2 extendedColors:(_Bool)arg3;
- (unsigned int)hitTestContext:(struct CGPoint)arg1;

@end
