/*
 Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

#import <Foundation/NSObject.h>

@interface PACountedFrame : NSObject

{
    unsigned int _count;
}

@property unsigned int count;

- (id)debugDescription;

@end
