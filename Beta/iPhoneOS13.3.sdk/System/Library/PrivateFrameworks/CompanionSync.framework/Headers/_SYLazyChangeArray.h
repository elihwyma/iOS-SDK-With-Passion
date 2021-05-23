/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <NSArray.h>

@protocol SYChangeSerializer;

@interface _SYLazyChangeArray : NSArray

{
    NSArray *_source;
    NSArray *_types;
    id <SYChangeSerializer> _decoder;
    _Bool _isSYObjectDataArray;
    long long _compatibilityVersion;
}

@property (nonatomic) long long compatibilityVersion;

- (unsigned long long)count;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)initWithSYObjectDataArray:(id)arg1 typeArray:(id)arg2 decoder:(id)arg3;
- (id)initWithSourceArray:(id)arg1 decoder:(id)arg2;

@end
