//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CDPEscapeOption : NSObject
{
    NSString *_title;
    NSUInteger _style;
    id /* CDUnknownBlockType */ _escapeAction;
    NSString *_progressTitle;
    NSString *_progressLabel;
}

+ (id)cancelOption;
@property(copy, nonatomic) NSString *progressLabel; // @synthesize progressLabel=_progressLabel;
@property(copy, nonatomic) NSString *progressTitle; // @synthesize progressTitle=_progressTitle;
@property(copy, nonatomic) id /* CDUnknownBlockType */ escapeAction; // @synthesize escapeAction=_escapeAction;
@property(nonatomic) NSUInteger style; // @synthesize style=_style;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
// - (void).cxx_destruct;

@end

