/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@interface RETransformerInvocation : NSObject

{
    struct vector<unsigned long, std::__1::allocator<unsigned long>> _values;
}

@property (nonatomic, readonly) unsigned long long numberOfArguments;

+ (id)invocationWithArguments:(unsigned long long *)arg1 count:(unsigned long long)arg2;

- (id)init;
- (void)dealloc;
- (void)setArgument:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (id).cxx_construct;
- (unsigned long long)getArgumentAtIndex:(unsigned long long)arg1;

@end
