/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@interface HUServiceDetailsSectionFactory : NSObject

{
    CDUnknownBlockType _customComparator;
}

@property (copy, nonatomic) CDUnknownBlockType customComparator;

- (CDUnknownBlockType)serviceDetailsItemComparatorForSectionIdentifier:(id)arg1;
- (id)buildServiceDetailsItemSectionForSourceItem:(id)arg1 sectionIdentifier:(id)arg2 items:(id)arg3;

@end
