/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol SBIconListLayoutProvider;

@interface SBHMappedIconListLayoutProvider : NSObject

{
    NSMutableDictionary *_mappedIconLocations;
    id <SBIconListLayoutProvider> _targetListLayoutProvider;
}

@property (nonatomic, readonly) id <SBIconListLayoutProvider> targetListLayoutProvider;

- (id)layoutForIconLocation:(id)arg1;
- (id)initWithTargetListLayoutProvider:(id)arg1;
- (void)mapIconLocation:(id)arg1 toIconLocation:(id)arg2;

@end
