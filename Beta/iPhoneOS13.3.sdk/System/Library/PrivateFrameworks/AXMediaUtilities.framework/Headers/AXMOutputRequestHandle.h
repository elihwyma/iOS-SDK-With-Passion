/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

@interface AXMOutputRequestHandle : NSObject

{
    NSMutableArray *_actionHandles;
}

@property (nonatomic, readonly) NSArray *actionHandles;

- (id)init;
- (void)addActionHandle:(id)arg1;

@end
