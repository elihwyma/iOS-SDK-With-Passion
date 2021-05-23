/*
 Image: /System/Library/PrivateFrameworks/vCard.framework/vCard
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface CNVCardSelectorMap : NSObject

{
    NSMutableArray *_strings;
    NSMutableArray *_selectors;
}

- (id)init;
- (void)setSelector:(SEL)arg1 forString:(id)arg2;
- (SEL)selectorForString:(id)arg1;

@end
