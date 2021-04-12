//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/TSKArchivedSelection-Protocol.h>

@class NSString, TSDDrawableSelection, TSKSelection;

__attribute__((visibility("hidden")))
@interface TSDArchivedDrawableSelection : TSPObject <TSKArchivedSelection>
{
    TSDDrawableSelection *mDrawableSelection;
}

@property(retain, nonatomic) TSKSelection *selection; // @synthesize selection=mDrawableSelection;
@property(readonly, copy) NSString *description;
- (void)saveToArchiver:(id)arg1;
- (void)saveToArchiver:(id)arg1 intoMessage:(struct DrawableSelectionArchive )arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)dealloc;

@end

