/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <Foundation/NSObject.h>

@class CAMetalLayer, IOSurfaceSharedEvent, NSMutableArray, NSString;

@protocol MTLTexture;

@interface CAMetalDrawable : NSObject

{
    struct _CAMetalDrawablePrivate *_priv;
    id <MTLTexture> _cachedTexture;
    CAMetalLayer *_layer;
    unsigned long long _drawableID;
    IOSurfaceSharedEvent *_sharedEvent;
    unsigned int _insertSeed;
    NSMutableArray *_presentedHandlers;
    unsigned long long _status;
    double _presentedTime;
    _Bool _presentScheduledInsertSeedValid;
    unsigned int _presentScheduledInsertSeed;
    NSMutableArray *_presentScheduledHandlers;
}

@property (nonatomic) unsigned long long drawableID;
@property (nonatomic) IOSurfaceSharedEvent *sharedEvent;
@property (nonatomic) unsigned int insertSeed;
@property (nonatomic) unsigned long long status;
@property (nonatomic) double presentedTime;
@property (nonatomic) unsigned int presentScheduledInsertSeed;
@property (nonatomic) _Bool presentScheduledInsertSeedValid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) id <MTLTexture> texture;
@property (readonly) CAMetalLayer *layer;

- (void)dealloc;
- (void)present;
- (void)addPresentScheduledHandler:(CDUnknownBlockType)arg1;
- (void)presentAtTime:(double)arg1;
- (void)presentAfterMinimumDuration:(double)arg1;
- (void)addPresentedHandler:(CDUnknownBlockType)arg1;
- (void)didPresentAtTime:(double)arg1;
- (_Bool)hasPresentedHandlers;
- (void)didScheduledPresent;
- (id)initWithDrawablePrivate:(struct _CAMetalDrawablePrivate *)arg1 layer:(id)arg2;
- (void)releasePrivateReferences:(struct _CAMetalLayerPrivate *)arg1;
- (struct _CAMetalDrawablePrivate *)priv;
- (id)cachedTexture;

@end
