/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VNEspressoResources : NSObject

{
    CDStruct_2bc666a5 _network;
    void *_plan;
    void *_context;
    NSString *_modelName;
}

@property (readonly) CDStruct_2bc666a5 network;
@property (readonly) void *plan;
@property (readonly) void *context;
@property (readonly) NSString *modelName;

- (void)dealloc;
- (id)description;
- (id)initWithModelName:(id)arg1 network:(CDStruct_2bc666a5)arg2 plan:(void *)arg3 context:(void *)arg4;
- (void)free;

@end
