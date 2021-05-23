/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSPredicate, NSString;

@interface GKSectionInfo : NSObject

{
    long long _section;
    NSPredicate *_predicate;
    NSArray *_sortDescriptors;
    NSArray *_items;
    NSString *_title;
}

@property (nonatomic) long long section;
@property (retain, nonatomic) NSPredicate *predicate;
@property (retain, nonatomic) NSArray *sortDescriptors;
@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) NSString *title;

- (void)dealloc;
- (id)description;

@end
