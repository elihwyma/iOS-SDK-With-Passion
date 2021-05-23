/*
 Image: /System/Library/PrivateFrameworks/SidecarCore.framework/SidecarCore
 */

#import <Foundation/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface SidecarTransferGroup : NSObject

{
    long long _completedItems;
    NSArray *_mutableItems;
    long long _type;
}

@property (nonatomic, readonly, getter=isComplete) _Bool complete;
@property (nonatomic, readonly) NSArray *items;
@property (nonatomic, readonly) long long type;

- (id)initWithMessage:(id)arg1;
- (_Bool)handleMessage:(id)arg1 error:(id *)arg2;

@end
