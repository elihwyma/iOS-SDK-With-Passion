//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface _UIPasteboardOptions : NSObject
{
    BOOL _pinned;
    BOOL _localOnly;
    NSDate *_expirationDate;
}

+ (id)optionsWithDictionary:(id)arg1;
@property(retain, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(nonatomic, getter=isLocalOnly) BOOL localOnly; // @synthesize localOnly=_localOnly;
@property(nonatomic, getter=isPinned) BOOL pinned; // @synthesize pinned=_pinned;
// - (void).cxx_destruct;
- (id)initWithOptionsDictionary:(id)arg1;

@end

