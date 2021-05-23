/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface ARArchive : NSObject

{
    NSMutableDictionary *_dataByPath;
}

@property (copy, nonatomic, readonly) NSArray *filePaths;

- (id)init;
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;
- (_Bool)writeToURL:(id)arg1 error:(id *)arg2;
- (_Bool)_loadArchiveFromURL:(id)arg1 error:(id *)arg2;
- (void)addData:(id)arg1 withPath:(id)arg2;
- (id)dataForResourceAtPath:(id)arg1;
- (_Bool)_readDataForEntry:(struct archive_entry *)arg1 archive:(struct archive *)arg2;
- (void)addData:(id)arg1 withFilename:(id)arg2 extension:(id)arg3;
- (id)dataForResource:(id)arg1 withExtension:(id)arg2;

@end
