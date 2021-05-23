/*
 Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

#import <Foundation/NSObject.h>

@interface NetworkCursor : NSObject

{
    struct vector<unsigned long, std::__1::allocator<unsigned long>> _nodeIndexes;
    unsigned long long _stateType;
}

@property (nonatomic) unsigned long long stateType;

+ (id)cursorByAddingNodeIndex:(unsigned long long)arg1 toCursor:(id)arg2;

- (id)init;
- (id).cxx_construct;
- (_Bool)isCompletePattern;
- (unsigned long long)nodeIndexCount;
- (unsigned long long)nodeIndexAtPosition:(unsigned long long)arg1;
- (void)addNodeIndex:(unsigned long long)arg1 withStateType:(unsigned long long)arg2;

@end
