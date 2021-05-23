/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VNModelFilesCache : NSObject

{
    struct unique_ptr<cvml::util::model_file_cache, std::__1::default_delete<cvml::util::model_file_cache>> m_impl;
}

+ (id)sharedInstance;

- (id)init;
- (id).cxx_construct;
- (id)load:(id)arg1;
- (void)unload:(id)arg1;
- (void)purgeAll;

@end
