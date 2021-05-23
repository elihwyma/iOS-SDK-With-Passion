/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <Foundation/NSObject.h>

@class NSMapTable, SBHIconModel;

@interface SBIconPreviousLocationTracker : NSObject

{
    NSMapTable *_previousIconLocations;
    SBHIconModel *_iconModel;
}

@property (retain, nonatomic) SBHIconModel *iconModel;

- (void)captureLocationInfoForIcon:(id)arg1 inModel:(id)arg2;
- (id)previousLocationInfoForIcon:(id)arg1;

@end
