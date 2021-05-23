/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface PXTuple : NSObject

{
    unsigned long long _hash;
    NSArray *_objects;
}

@property (nonatomic, readonly) NSArray *objects;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithObjects:(id)arg1;

@end
