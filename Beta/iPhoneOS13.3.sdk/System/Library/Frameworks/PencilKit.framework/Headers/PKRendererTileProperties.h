/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <Foundation/NSObject.h>

#import <PencilKit/Swift-Protocol.h>

@interface PKRendererTileProperties : NSObject <Swift>

{
    long long _level;
    struct CGPoint _offset;
}

@property (nonatomic, readonly) long long level;
@property (nonatomic, readonly) struct CGPoint offset;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLevel:(long long)arg1 offset:(struct CGPoint)arg2;

@end
