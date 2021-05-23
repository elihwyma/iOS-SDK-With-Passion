/*
 Image: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
 */

#import <Foundation/NSObject.h>

@interface HMICameraVideoPosterFrameGeneratorInput : NSObject

{
    unsigned long long _frameHeight;
    CDStruct_1b6d18a9 _generationFrequency;
}

@property (readonly) CDStruct_1b6d18a9 generationFrequency;
@property (readonly) unsigned long long frameHeight;

- (id)initWithGenerationFrequency:(CDStruct_1b6d18a9)arg1 andPosterFrameHeight:(unsigned long long)arg2;

@end
