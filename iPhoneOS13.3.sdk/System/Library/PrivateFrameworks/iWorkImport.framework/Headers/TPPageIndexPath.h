//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


__attribute__((visibility("hidden")))
@interface TPPageIndexPath : NSObject <NSCopying>
{
    NSUInteger _sectionIndex;
    NSUInteger _pageIndex;
}

@property(nonatomic) NSUInteger pageIndex; // @synthesize pageIndex=_pageIndex;
@property(nonatomic) NSUInteger sectionIndex; // @synthesize sectionIndex=_sectionIndex;
- (id)description;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;
- (id)initWithSectionIndex:(NSUInteger)arg1 pageIndex:(NSUInteger)arg2;

@end

