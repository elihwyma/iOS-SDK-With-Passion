/*
 Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

#import <Foundation/NSObject.h>

@interface ICWeakObject : NSObject

{
    id _object;
    unsigned long long _cachedHash;
}

@property (nonatomic) unsigned long long cachedHash;
@property (weak, nonatomic, readonly) id object;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithObject:(id)arg1;

@end
