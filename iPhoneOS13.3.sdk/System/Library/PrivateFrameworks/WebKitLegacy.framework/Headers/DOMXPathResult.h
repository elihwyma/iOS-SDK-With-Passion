//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebKitLegacy/DOMObject.h>

@class DOMNode, NSString;

@interface DOMXPathResult : DOMObject
{
}

- (id)snapshotItem:(unsigned int)arg1;
- (id)iterateNext;
@property(readonly) unsigned int snapshotLength;
@property(readonly) BOOL invalidIteratorState;
@property(readonly) DOMNode *singleNodeValue;
@property(readonly) BOOL booleanValue;
@property(readonly, copy) NSString *stringValue;
@property(readonly) double numberValue;
@property(readonly) unsigned short resultType;
- (void)dealloc;

@end

