/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface OITSUBacktrace : NSObject

{
    void **_callstack;
    int _frames;
    int _initAdjustment;
}

+ (id)new;
+ (id)backtrace;
+ (id)caller;
+ (id)callee;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)caller;
- (id)callee;
- (id)backtraceString;
- (id)initWithAdjustment:(int)arg1;
- (id)callerAtIndex:(long long)arg1;

@end
