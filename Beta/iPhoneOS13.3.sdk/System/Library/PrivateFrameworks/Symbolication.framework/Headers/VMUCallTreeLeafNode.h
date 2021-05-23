/*
 Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <Symbolication/VMUCallTreeNode.h>

@class NSCountedSet, NSString;

__attribute__((visibility("hidden")))
@interface VMUCallTreeLeafNode : VMUCallTreeNode

{
    NSCountedSet *_addresses;
    NSString *_combinedName;
}

- (id)init;
- (void)addAddress:(unsigned long long)arg1;
- (id)initWithName:(id)arg1 address:(unsigned long long)arg2 count:(unsigned int)arg3 numBytes:(unsigned long long)arg4;
- (void)getBrowserName:(id)arg1;

@end
