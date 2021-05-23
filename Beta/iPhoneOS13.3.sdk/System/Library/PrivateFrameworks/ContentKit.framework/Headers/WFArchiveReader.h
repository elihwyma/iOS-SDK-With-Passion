/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface WFArchiveReader : NSObject

{
    struct archive *_archive;
}

@property (nonatomic, readonly) struct archive *archive;

- (id)initWithArchiveFile:(id)arg1 error:(id *)arg2;
- (id)extractArchiveToDestinationURL:(id)arg1 error:(id *)arg2;

@end
