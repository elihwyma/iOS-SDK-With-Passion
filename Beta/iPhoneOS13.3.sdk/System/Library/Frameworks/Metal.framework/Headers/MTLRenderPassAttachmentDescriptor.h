/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Foundation/NSObject.h>

@protocol MTLTexture;

@interface MTLRenderPassAttachmentDescriptor : NSObject

@property (retain, nonatomic) id <MTLTexture> texture;
@property (nonatomic) unsigned long long level;
@property (nonatomic) unsigned long long slice;
@property (nonatomic) unsigned long long depthPlane;
@property (retain, nonatomic) id <MTLTexture> resolveTexture;
@property (nonatomic) unsigned long long resolveLevel;
@property (nonatomic) unsigned long long resolveSlice;
@property (nonatomic) unsigned long long resolveDepthPlane;
@property (nonatomic) unsigned long long loadAction;
@property (nonatomic) unsigned long long storeAction;
@property (nonatomic) unsigned long long storeActionOptions;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
