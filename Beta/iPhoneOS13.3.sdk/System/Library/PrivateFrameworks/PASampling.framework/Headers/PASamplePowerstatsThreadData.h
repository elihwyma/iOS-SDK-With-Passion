/*
 Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

#import <PASampling/PASampleThreadData.h>

@interface PASamplePowerstatsThreadData : PASampleThreadData

{
    unsigned int _powerstatsFlags;
}

- (unsigned int)powerstatsFlags;
- (_Bool)hasValidPowerstatsFlags;
- (id)initWithStackshotThread:(id)arg1 andLeafUserFrame:(id)arg2;

@end
