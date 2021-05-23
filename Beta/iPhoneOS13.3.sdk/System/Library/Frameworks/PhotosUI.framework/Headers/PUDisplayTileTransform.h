/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

#import <PhotosUI/Swift-Protocol.h>

@class NSString, PUModelTileTransform;

__attribute__((visibility("hidden")))
@interface PUDisplayTileTransform : NSObject <Swift>

{
    _Bool _hasUserInput;
    NSString *_userInputOriginIdentifier;
    double __initialScale;
    struct CGSize _transformPadding;
    struct CGSize __initialSize;
    struct CGSize __displaySize;
    struct CGAffineTransform _affineTransform;
}

@property (nonatomic, readonly) PUModelTileTransform *modelTileTransform;
@property (nonatomic, setter=_setHasUserInput:) _Bool hasUserInput;
@property (nonatomic, setter=_setAffineTransform:) struct CGAffineTransform affineTransform;
@property (copy, nonatomic, setter=_setUserInputOriginIdentifier:) NSString *userInputOriginIdentifier;
@property (nonatomic, setter=_setTransformPadding:) struct CGSize transformPadding;
@property (nonatomic, setter=_setInitialScale:) double _initialScale;
@property (nonatomic, setter=_setInitialSize:) struct CGSize _initialSize;
@property (nonatomic, setter=_setDisplaySize:) struct CGSize _displaySize;

+ (id)displayTileTransformWithModelTileTransform:(id)arg1 initialScale:(double)arg2 initialSize:(struct CGSize)arg3 displaySize:(struct CGSize)arg4 secondaryDisplayTileTransform:(id)arg5;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)newDisplayTileTransformWithUserAffineTransform:(struct CGAffineTransform)arg1 userInputOriginIdentifier:(id)arg2;

@end
