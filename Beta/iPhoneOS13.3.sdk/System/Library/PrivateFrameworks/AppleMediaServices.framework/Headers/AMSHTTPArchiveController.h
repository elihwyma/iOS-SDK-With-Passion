/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface AMSHTTPArchiveController : NSObject

+ (void)initialize;
+ (id)buffer;
+ (_Bool)_disabled;
+ (void)_updateMaxBufferSize;
+ (_Bool)isRemoveDisabled;
+ (void)setRemoveDisabled:(_Bool)arg1;
+ (id)maxBufferSizeOverride;
+ (void)setMaxBufferSizeOverride:(id)arg1;
+ (void)addHTTPArchive:(id)arg1;
+ (void)_writeHTTPArchivesToDiskCompressed:(_Bool)arg1;

@end
