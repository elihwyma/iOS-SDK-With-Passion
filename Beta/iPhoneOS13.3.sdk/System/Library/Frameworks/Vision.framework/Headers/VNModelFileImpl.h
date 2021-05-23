/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VNModelFileImpl : NSObject

{
    const struct mapped_model_file *m_impl;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) const void *baseAddress;
@property (nonatomic, readonly) unsigned long long length;
@property (retain, nonatomic) NSString *resourcePath;

- (void)advise:(long long)arg1;
- (id)initWithMappedModel:(const struct mapped_model_file *)arg1;

@end
