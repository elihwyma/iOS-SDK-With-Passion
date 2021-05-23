/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

#import <Home/Swift-Protocol.h>

@interface HFCroppedWallpaperInfo : NSObject <Swift>

{
    long long _source;
    double _scale;
    struct CGPoint _center;
}

@property (nonatomic, readonly) long long source;
@property (nonatomic, readonly) struct CGPoint center;
@property (nonatomic, readonly) double scale;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (id)initWithSource:(long long)arg1 center:(struct CGPoint)arg2 scale:(double)arg3;

@end
