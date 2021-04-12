//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/JSExport-Protocol.h>

@class IKDOMNamedNodeMap, IKDOMNodeList, NSString;

@protocol IKJSDOMElement <JSExport>
@property(readonly, copy, nonatomic) IKDOMNamedNodeMap *attributes;
@property(readonly, retain, nonatomic) NSString *tagName;
- (BOOL)hasAttributes;
- (BOOL)hasAttribute:(NSString *)arg1;
- (IKDOMNodeList *)getElementsByTagName:(NSString *)arg1;
- (void)removeAttribute:(NSString *)arg1;
- (void)setAttribute:(NSString *)arg1:(NSString *)arg2;
- (NSString *)getAttribute:(NSString *)arg1;
@end

