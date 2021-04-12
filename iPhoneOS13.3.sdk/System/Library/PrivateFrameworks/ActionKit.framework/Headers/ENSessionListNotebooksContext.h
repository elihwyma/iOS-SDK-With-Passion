//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCountedSet, NSError, NSMutableArray, NSMutableDictionary;

@interface ENSessionListNotebooksContext : NSObject
{
    NSMutableArray *_resultNotebooks;
    NSMutableArray *_linkedPersonalNotebooks;
    NSMutableDictionary *_sharedBusinessNotebooks;
    NSCountedSet *_sharedBusinessNotebookGuids;
    NSMutableDictionary *_businessNotebooks;
    NSMutableDictionary *_sharedNotebooks;
    long long _pendingSharedNotebooks;
    NSError *_error;
    id /* CDUnknownBlockType */ _completion;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ completion; // @synthesize completion=_completion;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) long long pendingSharedNotebooks; // @synthesize pendingSharedNotebooks=_pendingSharedNotebooks;
@property(retain, nonatomic) NSMutableDictionary *sharedNotebooks; // @synthesize sharedNotebooks=_sharedNotebooks;
@property(retain, nonatomic) NSMutableDictionary *businessNotebooks; // @synthesize businessNotebooks=_businessNotebooks;
@property(retain, nonatomic) NSCountedSet *sharedBusinessNotebookGuids; // @synthesize sharedBusinessNotebookGuids=_sharedBusinessNotebookGuids;
@property(retain, nonatomic) NSMutableDictionary *sharedBusinessNotebooks; // @synthesize sharedBusinessNotebooks=_sharedBusinessNotebooks;
@property(retain, nonatomic) NSMutableArray *linkedPersonalNotebooks; // @synthesize linkedPersonalNotebooks=_linkedPersonalNotebooks;
@property(retain, nonatomic) NSMutableArray *resultNotebooks; // @synthesize resultNotebooks=_resultNotebooks;
// - (void).cxx_destruct;

@end

