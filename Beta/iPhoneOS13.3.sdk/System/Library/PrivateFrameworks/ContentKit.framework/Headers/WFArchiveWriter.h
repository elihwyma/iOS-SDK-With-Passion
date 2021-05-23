/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface WFArchiveWriter : NSObject

{
    struct archive *_archive;
}

@property (nonatomic, readonly) struct archive *archive;

- (void)dealloc;
- (_Bool)finishWithError:(id *)arg1;
- (id)initWithDestinationURL:(id)arg1 format:(id)arg2 error:(id *)arg3;
- (_Bool)writeArchiveEntry:(id)arg1 error:(id *)arg2;

@end
