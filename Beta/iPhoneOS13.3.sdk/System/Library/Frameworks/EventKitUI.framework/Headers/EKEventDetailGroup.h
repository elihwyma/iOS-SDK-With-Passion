/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface EKEventDetailGroup : NSObject

{
    long long _tag;
    NSArray *_items;
    NSString *_headerTitle;
}

@property (nonatomic) long long tag;
@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) NSString *headerTitle;

- (id)description;
- (unsigned long long)numberOfRows;
- (id)itemAtIndex:(unsigned long long)arg1;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (id)itemAtIndex:(unsigned long long)arg1 subitemIndex:(unsigned long long *)arg2;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1 withTraitCollection:(id)arg2;
- (id)initWithTag:(long long)arg1 headerTitle:(id)arg2;
- (_Bool)hasSubitemForIndexPathRow:(unsigned long long)arg1;
- (void)updateCellLayoutsForRowCountIfNeededUsingWidth:(double)arg1;

@end
