//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UILabel;

@interface PXLabelAnimationContext : NSObject
{
    UILabel *_label;
    CGRect _destinationRect;
}

@property CGRect destinationRect; // @synthesize destinationRect=_destinationRect;
@property(retain) UILabel *label; // @synthesize label=_label;
// - (void).cxx_destruct;
- (id)initWithLabel:(id)arg1 andDestinationRect:(CGRect)arg2;

@end

