/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSDate, NSDateComponents, PGManager;

@interface PGContextualOptions : NSObject

{
    PGManager *_manager;
    NSDate *_localToday;
    NSDateComponents *_localTodayComponents;
}

@property (retain, nonatomic) NSDate *localToday;
@property (retain, nonatomic) NSDateComponents *localTodayComponents;

- (id)initWithManager:(id)arg1 options:(id)arg2;
- (id)availableContextualRules;

@end
