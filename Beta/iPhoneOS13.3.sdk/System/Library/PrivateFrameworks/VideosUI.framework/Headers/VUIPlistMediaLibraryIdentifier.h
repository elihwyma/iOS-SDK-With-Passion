/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface VUIPlistMediaLibraryIdentifier : NSObject

{
    NSURL *_libraryFileURL;
}

@property (copy, nonatomic) NSURL *libraryFileURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithURL:(id)arg1;

@end
