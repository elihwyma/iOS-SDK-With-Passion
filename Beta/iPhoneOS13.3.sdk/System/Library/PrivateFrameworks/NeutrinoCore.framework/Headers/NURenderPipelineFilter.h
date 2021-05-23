/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

@class NUScript;

@interface NURenderPipelineFilter : NSObject

{
    NUScript *_script;
}

@property (nonatomic, readonly) NUScript *script;

+ (id)stopAtTagFilter:(id)arg1;

- (id)init;
- (id)description;
- (id)initWithScript:(id)arg1;

@end
