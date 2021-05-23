/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@interface SVWeakReferenceObject : NSObject

{
    id _object;
}

@property (weak, nonatomic, readonly) id object;

+ (id)withObject:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithObject:(id)arg1;

@end
