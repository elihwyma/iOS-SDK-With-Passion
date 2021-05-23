/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class VEKProduction;

@interface PMSaveProvider : NSObject

{
    VEKProduction *_production;
}

@property (retain, nonatomic) VEKProduction *production;

- (void)save:(_Bool)arg1;
- (id)initWithProduction:(id)arg1;

@end
