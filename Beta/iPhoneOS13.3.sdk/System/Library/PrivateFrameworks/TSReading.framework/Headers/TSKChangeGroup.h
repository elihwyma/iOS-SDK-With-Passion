/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

#import <TSReading/Swift-Protocol.h>

@class NSMutableArray;

@interface TSKChangeGroup : NSObject <Swift>

{
    NSMutableArray *mChangesArray;
}

@property (nonatomic, readonly) NSMutableArray *changesArray;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)registerChange:(int)arg1 details:(id)arg2 forChangeSource:(id)arg3;

@end
