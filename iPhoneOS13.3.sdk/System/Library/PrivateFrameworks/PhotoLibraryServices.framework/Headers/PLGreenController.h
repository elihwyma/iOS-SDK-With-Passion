//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface PLGreenController : NSObject
{
    NSDictionary *_currentGreenValues;
}

@property(readonly, nonatomic) NSDictionary *currentGreenValues; // @synthesize currentGreenValues=_currentGreenValues;
// - (void).cxx_destruct;
- (BOOL)greenValuesSimilarToGreenValues:(id)arg1;
- (BOOL)isGreenStateValid;
- (void)readValuesFromDisk;
- (id)init;

@end

