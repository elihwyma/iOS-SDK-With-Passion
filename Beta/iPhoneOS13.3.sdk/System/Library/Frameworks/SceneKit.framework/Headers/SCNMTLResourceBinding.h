/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

@class MTLArgument, NSMutableArray, NSString;

@protocol MTLArgumentEncoder;

__attribute__((visibility("hidden")))
@interface SCNMTLResourceBinding : NSObject

{
    _Bool _needsRenderResource;
    CDStruct_21854d8c _indices;
    CDStruct_21854d8c _samplerIndices;
    NSMutableArray *_usedResources;
    id _bindBlock;
    MTLArgument *_argument;
    id <MTLArgumentEncoder> _argumentEncoder;
}

@property (retain, nonatomic) MTLArgument *argument;
@property (retain, nonatomic) id <MTLArgumentEncoder> argumentEncoder;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSMutableArray *usedResources;
@property (nonatomic) _Bool needsRenderResource;
@property (copy, nonatomic) id bindBlock;

- (id)init;
- (void)dealloc;
- (id)description;

@end
