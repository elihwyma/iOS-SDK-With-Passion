/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <Foundation/NSObject.h>

@class NSArray, WebResource;

__attribute__((visibility("hidden")))
@interface WebArchivePrivate : NSObject

{
    WebResource *cachedMainResource;
    NSArray *cachedSubresources;
    NSArray *cachedSubframeArchives;
    RefPtr_a4a1529f coreArchive;
}

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (id)initWithCoreArchive:(RefPtr_a4a1529f *)arg1;
- (struct LegacyWebArchive *)coreArchive;
- (void)setCoreArchive:(Ref_f33f0404 *)arg1;

@end
