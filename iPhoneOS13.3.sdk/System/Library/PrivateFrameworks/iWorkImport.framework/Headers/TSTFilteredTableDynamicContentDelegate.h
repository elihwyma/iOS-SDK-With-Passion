//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSTLayoutDynamicContentProtocol-Protocol.h>

@class TSTTableInfo;

__attribute__((visibility("hidden")))
@interface TSTFilteredTableDynamicContentDelegate : NSObject <TSTLayoutDynamicContentProtocol>
{
    TSTTableInfo *_tableInfo;
}

@property(retain, nonatomic) TSTTableInfo *tableInfo; // @synthesize tableInfo=_tableInfo;
// - (void).cxx_destruct;
- (BOOL)dynamicContentMustDrawOnMainThread;
- (BOOL)cell:(id )arg1 forCellID:(struct TSUCellCoord)arg2;
- (id)initWithTableInfo:(id)arg1;

@end

