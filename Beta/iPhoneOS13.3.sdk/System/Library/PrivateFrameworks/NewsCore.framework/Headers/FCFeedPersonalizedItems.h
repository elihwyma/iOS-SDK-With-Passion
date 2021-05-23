/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMapTable;

@interface FCFeedPersonalizedItems : NSObject

{
    NSArray *_itemsToShow;
    NSArray *_itemsToHide;
    NSMapTable *_scoreProfiles;
}

@property (retain, nonatomic) NSArray *itemsToShow;
@property (retain, nonatomic) NSArray *itemsToHide;
@property (retain, nonatomic) NSMapTable *scoreProfiles;

@end
