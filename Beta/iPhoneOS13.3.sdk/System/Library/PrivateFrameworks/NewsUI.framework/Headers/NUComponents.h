/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

@interface NUComponents : NSObject

{
    NSMutableArray *_mutableComponents;
}

@property (nonatomic, readonly) NSMutableArray *mutableComponents;
@property (nonatomic, readonly) NSArray *components;
@property (nonatomic, readonly) NSArray *reversedComponents;

- (id)init;
- (id)description;
- (void)addComponent:(id)arg1;

@end
