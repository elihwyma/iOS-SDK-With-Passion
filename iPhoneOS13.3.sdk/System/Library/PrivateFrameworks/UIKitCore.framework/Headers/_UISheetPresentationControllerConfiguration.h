//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


__attribute__((visibility("hidden")))
@interface _UISheetPresentationControllerConfiguration : NSObject <NSSecureCoding>
{
    BOOL __wantsFullScreen;
    long long __mode;
}

+ (BOOL)supportsSecureCoding;
+ (id)_fullScreenConfiguration;
@property(nonatomic, setter=_setMode:) long long _mode; // @synthesize _mode=__mode;
@property(nonatomic, setter=_setWantsFullScreen:) BOOL _wantsFullScreen; // @synthesize _wantsFullScreen=__wantsFullScreen;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

