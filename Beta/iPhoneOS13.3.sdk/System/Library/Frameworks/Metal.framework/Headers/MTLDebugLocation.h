/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Foundation/NSObject.h>

@class MTLDebugInstrumentationData, MTLDebugSubProgram;

__attribute__((visibility("hidden")))
@interface MTLDebugLocation : NSObject

{
    MTLDebugInstrumentationData *_data;
    struct DebugLocation *_debugLoc;
}

@property (nonatomic, readonly) MTLDebugSubProgram *scope;
@property (nonatomic, readonly) unsigned int line;
@property (nonatomic, readonly) unsigned int column;
@property (nonatomic, readonly) MTLDebugLocation *inlinedAt;

- (void)dealloc;
- (id)retain;
- (oneway void)release;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (oneway void)releaseInternal;

@end
