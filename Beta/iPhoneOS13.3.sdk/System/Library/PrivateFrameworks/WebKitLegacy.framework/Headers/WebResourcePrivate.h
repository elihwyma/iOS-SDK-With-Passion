/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebResourcePrivate : NSObject

{
    struct RefPtr<WebCore::ArchiveResource, WTF::DumbPtrTraits<WebCore::ArchiveResource>> coreResource;
}

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (id)initWithCoreResource:(Ref_23906fc6 *)arg1;

@end
