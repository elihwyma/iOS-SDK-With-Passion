/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface SCNMaterialAttachment : NSObject

{
    unsigned int glID;
    unsigned int target;
    void *context;
    struct CGSize size;
    NSDictionary *options;
}

@property (nonatomic) unsigned int glID;
@property (nonatomic) unsigned int target;
@property (nonatomic) void *context;
@property (nonatomic) struct CGSize size;
@property (copy, nonatomic) NSDictionary *options;

+ (id)materialAttachmentWithGLKTextureInfo:(id)arg1;

- (void)dealloc;

@end
