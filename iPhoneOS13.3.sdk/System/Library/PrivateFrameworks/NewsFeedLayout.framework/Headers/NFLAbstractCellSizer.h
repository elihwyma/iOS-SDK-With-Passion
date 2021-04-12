//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NFLAbstractCellPropertyProvider, NFLFeedSettings;

@interface NFLAbstractCellSizer : NSObject
{
    NFLAbstractCellPropertyProvider *_propertyProvider;
    NFLFeedSettings *_feedSettings;
}

@property(nonatomic) __weak NFLFeedSettings *feedSettings; // @synthesize feedSettings=_feedSettings;
@property(retain, nonatomic) NFLAbstractCellPropertyProvider *propertyProvider; // @synthesize propertyProvider=_propertyProvider;
// - (void).cxx_destruct;
- (id)layoutDataForTileInfo:(id)arg1 template:(id)arg2 columnSpan:(NSUInteger)arg3 showAccessoryText:(BOOL)arg4;
- (id)initWithFeedSettings:(id)arg1;
- (id)init;

@end

