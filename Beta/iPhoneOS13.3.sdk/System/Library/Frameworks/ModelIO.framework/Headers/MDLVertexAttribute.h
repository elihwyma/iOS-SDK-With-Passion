/*
 Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

#import <Foundation/NSObject.h>

#import <ModelIO/Swift-Protocol.h>

@class MISSING_TYPE, NSString;

@interface MDLVertexAttribute : NSObject <Swift>

{
    NSString *_name;
    unsigned long long _offset;
    unsigned long long _bufferIndex;
    unsigned long long _format;
    double _time;
    MISSING_TYPE *_initializationValue;
}

@property (copy, nonatomic) NSString *name;
@property (nonatomic) unsigned long long format;
@property (nonatomic) unsigned long long offset;
@property (nonatomic) unsigned long long bufferIndex;
@property (nonatomic) double time;
@property (nonatomic) MISSING_TYPE *initializationValue;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 format:(unsigned long long)arg2 offset:(unsigned long long)arg3 bufferIndex:(unsigned long long)arg4;

@end
