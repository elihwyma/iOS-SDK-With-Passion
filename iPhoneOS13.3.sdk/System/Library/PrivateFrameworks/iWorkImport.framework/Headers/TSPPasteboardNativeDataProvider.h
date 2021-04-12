//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSPDecoder-Protocol.h>

@class NSArray, NSMutableDictionary, NSString, TSPPasteboard;

__attribute__((visibility("hidden")))
@interface TSPPasteboardNativeDataProvider : NSObject <TSPDecoder>
{
    TSPPasteboard *_pasteboard;
    NSMutableDictionary *_nativeData;
    NSMutableDictionary *_tspData;
}

// - (void).cxx_destruct;
- (id)newReadChannelForDataWithIdentifier:(long long)arg1 info:(id)arg2;
- (id)newReadChannelForRootObjectComponent;
- (id)newReadChannelForMetadata;
- (id)pasteboardPropertyListForType:(id)arg1;
- (id)dataForIdentifier:(long long)arg1;
@property(readonly, nonatomic) NSArray *promisedDataTypes;
- (void)loadNativeData;
@property(readonly, copy) NSString *debugDescription;
- (id)initWithPasteboard:(id)arg1 nativeData:(id)arg2 tspData:(id)arg3;
- (id)init;

@end

