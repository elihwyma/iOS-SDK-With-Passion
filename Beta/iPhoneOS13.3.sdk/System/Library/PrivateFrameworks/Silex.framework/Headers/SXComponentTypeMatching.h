/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface SXComponentTypeMatching : NSObject

{
    NSMutableArray *_descriptions;
}

@property (nonatomic, readonly) NSMutableArray *descriptions;

- (id)init;
- (id)match:(id)arg1;
- (void)addDescription:(id)arg1;
- (void)removeDescription:(id)arg1;

@end
