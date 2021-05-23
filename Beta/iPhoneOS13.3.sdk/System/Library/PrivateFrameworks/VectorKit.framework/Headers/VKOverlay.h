/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@class NSString, VKVectorOverlayData;

@protocol VKOverlayDelegate;

@interface VKOverlay : NSObject

{
    _Bool _canProvideVectorGeometry;
    id <VKOverlayDelegate> _delegate;
    CDStruct_02837cd9 _replaceMapContentInRect;
    unsigned long long _level;
    unsigned int identifier;
    weak_ptr_96fca551 _flyoverContainer;
    weak_ptr_4d470b75 _standardContainer;
    struct RunLoopController *_runLoopController;
    VKVectorOverlayData *_vectorData;
    struct unfair_lock _vectorDataLock;
    _Bool _canProvideVectorData;
    unsigned int _identifier;
}

@property (nonatomic) weak_ptr_96fca551 flyoverContainer;
@property (nonatomic) weak_ptr_4d470b75 standardContainer;
@property (nonatomic) struct RunLoopController *runLoopController;
@property (nonatomic) id <VKOverlayDelegate> delegate;
@property (readonly) _Bool canProvideVectorData;
@property (nonatomic) CDStruct_02837cd9 replaceMapContentInRect;
@property (nonatomic) unsigned long long level;
@property (nonatomic, readonly) unsigned int identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (void)setNeedsDisplayForReason:(unsigned long long)arg1;
- (void)setNeedsDisplayInRect:(const CDStruct_02837cd9 *)arg1 level:(long long)arg2 reason:(unsigned long long)arg3;
- (_Bool)canPossiblyDrawKey:(const CDStruct_7523a67d *)arg1;
- (_Bool)canDrawKey:(const CDStruct_7523a67d *)arg1;
- (void)drawKey:(const CDStruct_7523a67d *)arg1 inContext:(struct CGContext *)arg2;
- (id)vectorData;
- (void)vectorOverlayNeedsDisplay:(id)arg1 needsFullInvalidate:(_Bool)arg2;
- (void)_updateVectorData;

@end
