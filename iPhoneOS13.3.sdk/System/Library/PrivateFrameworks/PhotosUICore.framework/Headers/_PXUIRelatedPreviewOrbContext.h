//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIViewController;
@protocol PXRelatedEntry;

@interface _PXUIRelatedPreviewOrbContext : NSObject
{
    UIViewController *_previewViewController;
    id <PXRelatedEntry> _relatedEntry;
}

@property(retain, nonatomic) id <PXRelatedEntry> relatedEntry; // @synthesize relatedEntry=_relatedEntry;
@property(retain, nonatomic) UIViewController *previewViewController; // @synthesize previewViewController=_previewViewController;
// - (void).cxx_destruct;

@end

