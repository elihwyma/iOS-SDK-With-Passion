//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ASDUpdateWatchApps : NSObject
{
}

+ (void)updateBundleIDs:(id)arg1 userInitiated:(BOOL)arg2 withResultHandler:(id /* CDUnknownBlockType */)arg3;
+ (BOOL)updateBundleIDs:(id)arg1 userInitiated:(BOOL)arg2 error:(id )arg3;
+ (void)shouldPromptBeforeUpdatingWithResultHandler:(id /* CDUnknownBlockType */)arg1;
+ (BOOL)shouldPromptBeforeUpdating;

@end

