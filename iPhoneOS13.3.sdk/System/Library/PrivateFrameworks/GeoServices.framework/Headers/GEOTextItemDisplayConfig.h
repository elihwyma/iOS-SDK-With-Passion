//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOTextItemDisplayConfig-Protocol.h>

@interface GEOTextItemDisplayConfig : NSObject <GEOTextItemDisplayConfig>
{
    unsigned int _maxItemsPerRow;
    unsigned int _maxRowCount;
}

@property(readonly, nonatomic) unsigned int maxRowCount; // @synthesize maxRowCount=_maxRowCount;
@property(readonly, nonatomic) unsigned int maxItemsPerRow; // @synthesize maxItemsPerRow=_maxItemsPerRow;
- (id)initWithTextItemDisplayConfig:(id)arg1;
- (id)initWithMaxItemsPerRow:(unsigned int)arg1 maxRowCount:(unsigned int)arg2;
- (id)init;

@end

