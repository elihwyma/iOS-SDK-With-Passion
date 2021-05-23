/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Foundation/NSObject.h>

@class MTLDebugInstrumentationData, NSString;

__attribute__((visibility("hidden")))
@interface MTLDebugSubProgram : NSObject

{
    MTLDebugInstrumentationData *_data;
    struct DebugSubProgram *_debugSubProgram;
}

@property (nonatomic, readonly) NSString *filename;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned int line;

- (id)retain;
- (oneway void)release;
- (oneway void)releaseInternal;

@end
