//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface CNHeap : NSObject
{
    NSString *_rawDataString;
    NSMutableArray *_heapObjects;
    NSMutableDictionary *_heapObjectsByClassAndBinary;
}

@property(retain, nonatomic) NSMutableDictionary *heapObjectsByClassAndBinary; // @synthesize heapObjectsByClassAndBinary=_heapObjectsByClassAndBinary;
@property(retain) NSMutableArray *heapObjects; // @synthesize heapObjects=_heapObjects;
@property(retain) NSString *rawDataString; // @synthesize rawDataString=_rawDataString;
// - (void).cxx_destruct;

@end

