/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <NSObject.h>

@class NSArray;

@interface MLCompilerResult : NSObject

{
    NSArray *_outputFiles;
}

@property (retain) NSArray *outputFiles;

+ (id)resultWithOutputFiles:(id)arg1;

@end
