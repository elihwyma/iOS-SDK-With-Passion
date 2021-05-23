/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, UIUpdateItem;

__attribute__((visibility("hidden")))
@interface UITableViewUpdateGap : NSObject

{
    NSMutableArray *_deleteItems;
    NSMutableArray *_insertItems;
    struct {
        unsigned int hasAutomaticAnimationItems:1;
    } _gapFlags;
    UIUpdateItem *_firstUpdateItem;
    UIUpdateItem *_lastUpdateItem;
}

@property (retain, nonatomic) UIUpdateItem *firstUpdateItem;
@property (retain, nonatomic) UIUpdateItem *lastUpdateItem;
@property (nonatomic, readonly) NSArray *updateItems;
@property (nonatomic, readonly) NSArray *deleteItems;
@property (nonatomic, readonly) NSArray *insertItems;
@property (nonatomic, readonly) _Bool isDeleteBasedGap;
@property (nonatomic, readonly) _Bool hasInserts;
@property (nonatomic, readonly) _Bool isSectionBasedGap;
@property (nonatomic, readonly) _Bool hasAutomaticAnimationItems;

+ (id)gapWithUpdateItem:(id)arg1;

- (id)init;
- (id)description;
- (void)addUpdateItem:(id)arg1;

@end
