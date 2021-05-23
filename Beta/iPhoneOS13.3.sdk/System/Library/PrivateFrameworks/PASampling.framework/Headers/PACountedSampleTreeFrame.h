/*
 Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

#import <PASampling/PACountedSampleFrame.h>

@class NSMutableSet, NSString;

@interface PACountedSampleTreeFrame : PACountedSampleFrame

{
    unsigned long long _state;
    NSString *_waitInfoString;
    NSMutableSet *_children;
}

@property (weak, readonly) NSMutableSet *children;
@property (readonly) _Bool isLeafFrame;
@property unsigned long long state;
@property (retain) NSString *waitInfoString;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithSampleFrame:(id)arg1 andState:(unsigned long long)arg2 andWaitInfoString:(id)arg3;

@end
