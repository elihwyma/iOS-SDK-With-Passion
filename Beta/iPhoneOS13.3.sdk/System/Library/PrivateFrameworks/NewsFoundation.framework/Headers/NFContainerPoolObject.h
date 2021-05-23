/*
 Image: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
 */

#import <Foundation/NSObject.h>

@interface NFContainerPoolObject : NSObject

{
    unsigned long long _ownership;
    id _strongObject;
    id _weakObject;
}

@property (nonatomic, readonly) unsigned long long ownership;
@property (nonatomic, readonly) id strongObject;
@property (weak, nonatomic, readonly) id weakObject;
@property (nonatomic, readonly) id object;

- (id)initWithObject:(id)arg1 ownership:(unsigned long long)arg2;

@end
