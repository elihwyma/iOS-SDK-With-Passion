/*
 Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
 */

#import <NSObject.h>

@interface TMLWeakReferenceObject : NSObject

{
    id _object;
}

@property (weak, nonatomic, readonly) id object;

+ (id)weakReferenceWithObject:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithObject:(id)arg1;

@end
