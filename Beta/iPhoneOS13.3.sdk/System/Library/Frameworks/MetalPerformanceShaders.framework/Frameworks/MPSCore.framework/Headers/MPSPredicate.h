/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
 */

#import <Foundation/NSObject.h>

@protocol MTLBuffer;

@interface MPSPredicate : NSObject

{
    id <MTLBuffer> _predicateBuffer;
    unsigned long long _predicateOffset;
}

@property (retain, nonatomic, readonly) id <MTLBuffer> predicateBuffer;
@property (nonatomic, readonly) unsigned long long predicateOffset;

+ (id)predicateWithBuffer:(id)arg1 offset:(unsigned long long)arg2;

- (id)init;
- (void)dealloc;
- (id)debugDescription;
- (id)debugQuickLookObject;
- (id)initWithDevice:(id)arg1;
- (id)initWithBuffer:(id)arg1 offset:(unsigned long long)arg2;

@end
