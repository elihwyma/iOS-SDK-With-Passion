//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/MKAnnotationView.h>

@class UIColor;

@interface HKDotAnnotationView : MKAnnotationView
{
    UIColor *_dotColor;
}

@property(retain, nonatomic) UIColor *dotColor; // @synthesize dotColor=_dotColor;
// - (void).cxx_destruct;
- (void)drawRect:(CGRect)arg1;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;

@end

