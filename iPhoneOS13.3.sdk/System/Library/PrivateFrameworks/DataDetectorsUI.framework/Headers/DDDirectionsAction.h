//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DataDetectorsUI/DDAction.h>

__attribute__((visibility("hidden")))
@interface DDDirectionsAction : DDAction
{
}

+ (BOOL)actionAvailableForCachedEvent:(id)arg1;
+ (BOOL)actionAvailableForContact:(id)arg1;
- (BOOL)canBePerformedByOpeningURL;
- (void)performFromView:(id)arg1;
- (id)notificationURL;
- (id)notificationIconBundleIdentifier;
- (id)notificationTitle;
- (id)icon;
- (id)localizedName;

@end

