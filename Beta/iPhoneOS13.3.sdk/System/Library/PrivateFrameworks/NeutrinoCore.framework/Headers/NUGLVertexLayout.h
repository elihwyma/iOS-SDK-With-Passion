/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface NUGLVertexLayout : NSObject

{
    NSArray *_attributes;
    long long _size;
}

@property (readonly) long long count;
@property (readonly) NSArray *attributes;
@property (readonly) long long size;
@property (readonly) NSArray *attributeNames;

- (id)init;
- (id)initWithAttributes:(id)arg1;
- (int)offsetAtIndex:(unsigned long long)arg1;
- (id)attributeWithName:(id)arg1;
- (long long)offsetForAttribute:(id)arg1;
- (unsigned long long)indexOfAttribute:(id)arg1;

@end
