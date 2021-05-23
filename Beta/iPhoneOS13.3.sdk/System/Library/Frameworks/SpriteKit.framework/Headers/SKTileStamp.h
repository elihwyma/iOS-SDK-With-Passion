/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <Foundation/NSObject.h>

@interface SKTileStamp : NSObject

{
    unsigned int _columns;
    unsigned int _rows;
    unsigned int *_tileData;
}

@property (nonatomic, readonly) unsigned long long numberOfColumns;
@property (nonatomic, readonly) unsigned long long numberOfRows;
@property (nonatomic, readonly) unsigned int *tileData;

+ (_Bool)supportsSecureCoding;
+ (id)tileStampWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 tileData:(unsigned int *)arg3;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToNode:(id)arg1;
- (void)setTileData:(unsigned int *)arg1 size:(unsigned long long)arg2;
- (id)initWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 tileData:(unsigned int *)arg3;
- (id)tileDefinitionsForTileMap:(id)arg1;

@end
