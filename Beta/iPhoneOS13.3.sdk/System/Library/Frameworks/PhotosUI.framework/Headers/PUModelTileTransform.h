/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

#import <PhotosUI/Swift-Protocol.h>

@class NSString;

@interface PUModelTileTransform : NSObject <Swift>

{
    _Bool _hasUserInput;
    double _scale;
    NSString *_userInputOriginIdentifier;
    struct CGPoint _normalizedTranslation;
    struct CGPoint _overscroll;
}

@property (nonatomic, readonly) _Bool hasUserInput;
@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) struct CGPoint normalizedTranslation;
@property (nonatomic, readonly) struct CGPoint overscroll;
@property (copy, nonatomic, readonly) NSString *userInputOriginIdentifier;
@property (nonatomic, readonly) _Bool hasUserZoomedOut;
@property (nonatomic, readonly) _Bool hasUserZoomedIn;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithNoUserInput;
- (id)initWithNormalizedTranslation:(struct CGPoint)arg1 overscroll:(struct CGPoint)arg2 scale:(double)arg3 userInputOriginIdentifier:(id)arg4;

@end
