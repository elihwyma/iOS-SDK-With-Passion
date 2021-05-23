/*
 Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

#import <Foundation/NSObject.h>

#import <ModelIO/Swift-Protocol.h>

@interface MDLVertexBufferLayout : NSObject <Swift>

{
    unsigned long long _stride;
}

@property (nonatomic) unsigned long long stride;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStride:(unsigned long long)arg1;

@end
