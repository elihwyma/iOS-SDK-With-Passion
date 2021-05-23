/*
 Image: /System/Library/PrivateFrameworks/SidecarCore.framework/SidecarCore
 */

#import <SidecarCore/SidecarItem.h>

@class NSMutableData;

__attribute__((visibility("hidden")))
@interface SidecarMutableItem : SidecarItem

{
    NSMutableData *_mutableData;
    unsigned long long _capacity;
    unsigned int _complete:1;
}

@property (readonly, getter=isComplete) _Bool complete;

- (id)data;
- (_Bool)appendData:(id)arg1;
- (id)initWithType:(id)arg1 capacity:(unsigned long long)arg2;

@end
