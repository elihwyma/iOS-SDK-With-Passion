/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _UILibArchiveStreamingExtractor : NSObject

{
    NSString *_archivePath;
    NSArray *_extractedContentAbsolutePaths;
}

@property (nonatomic, readonly) NSString *archivePath;
@property (nonatomic, readonly) NSArray *extractedContentAbsolutePaths;

+ (id)archiveSubpathByStandardizingArchiveSubpath:(id)arg1;
+ (_Bool)shouldExtractPathInArchive:(id)arg1 forExtractionRootedAtStandardizedSubpathInArchive:(id)arg2;

- (id)initForExtractingArchivePath:(id)arg1;
- (_Bool)extractArchivePath:(id)arg1 toDirectory:(id)arg2 error:(id *)arg3;

@end
