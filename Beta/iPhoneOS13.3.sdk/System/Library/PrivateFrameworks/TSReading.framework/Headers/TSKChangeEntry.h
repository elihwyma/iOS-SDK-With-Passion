/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface TSKChangeEntry : NSObject

{
    id mChangeSource;
    NSMutableArray *mChanges;
}

@property (nonatomic, readonly) id changeSource;
@property (nonatomic, readonly) NSMutableArray *changes;

- (void)dealloc;
- (id)initWithChangeSource:(id)arg1 changes:(id)arg2;

@end
