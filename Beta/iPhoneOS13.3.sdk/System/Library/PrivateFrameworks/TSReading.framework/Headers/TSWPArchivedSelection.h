/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSPObject.h>

@class TSWPSelection;

@interface TSWPArchivedSelection : TSPObject

{
    TSWPSelection *_selection;
}

@property (retain, nonatomic) TSWPSelection *selection;

- (void)dealloc;
- (id)initWithContext:(id)arg1;

@end
