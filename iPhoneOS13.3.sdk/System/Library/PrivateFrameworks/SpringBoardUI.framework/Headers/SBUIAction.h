//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIImage, UIView;

@interface SBUIAction : NSObject
{
    NSString *_title;
    NSString *_subtitle;
    UIImage *_image;
    NSString *_systemImageName;
    UIView *_badgeView;
    id /* CDUnknownBlockType */ _handler;
}

@property(readonly, copy, nonatomic) id /* CDUnknownBlockType */ handler; // @synthesize handler=_handler;
@property(readonly, nonatomic) UIView *badgeView; // @synthesize badgeView=_badgeView;
@property(readonly, nonatomic) NSString *systemImageName; // @synthesize systemImageName=_systemImageName;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
// - (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 handler:(id /* CDUnknownBlockType */)arg2;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 handler:(id /* CDUnknownBlockType */)arg3;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 image:(id)arg3 handler:(id /* CDUnknownBlockType */)arg4;
- (id)init;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 systemImageName:(id)arg3 badgeView:(id)arg4 handler:(id /* CDUnknownBlockType */)arg5;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 image:(id)arg3 badgeView:(id)arg4 handler:(id /* CDUnknownBlockType */)arg5;

@end

