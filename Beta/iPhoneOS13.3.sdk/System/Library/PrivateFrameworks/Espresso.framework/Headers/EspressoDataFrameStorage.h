/*
 Image: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
 */

#import <NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface EspressoDataFrameStorage : NSObject

{
    NSMutableArray *_dataFrames;
    NSMutableDictionary *_mappedFiles;
    NSString *_baseFilename;
}

@property (retain) NSMutableArray *dataFrames;
@property (retain) NSMutableDictionary *mappedFiles;
@property (retain) NSString *baseFilename;

+ (id)dataFrameStorageFromPath:(id)arg1 error:(id *)arg2;

- (unsigned long long)numberOfDataFrames;
- (id)dataFrameAtIndex:(unsigned long long)arg1;

@end
