//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/OADEmbeddedMediaFile.h>

@class TSPData;

__attribute__((visibility("hidden")))
@interface OADExportedEmbeddedMediaFile : OADEmbeddedMediaFile
{
    BOOL isAudioOnly;
    TSPData *_tspData;
}

@property(retain, nonatomic) TSPData *tspData; // @synthesize tspData=_tspData;
- (void)setIsAudioOnly:(BOOL)arg1;
- (BOOL)isAudioOnly;
// - (void).cxx_destruct;

@end

