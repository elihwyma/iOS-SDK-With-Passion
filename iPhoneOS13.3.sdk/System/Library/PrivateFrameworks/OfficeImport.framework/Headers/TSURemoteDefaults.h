//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/TSURemotePropertyList.h>

__attribute__((visibility("hidden")))
@interface TSURemoteDefaults : TSURemotePropertyList
{
}

+ (id)sharedDefaults;
- (void)processPropertyList:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)registerDefaults;
- (id)initInternal;
- (id)initWithRemoteURL:(id)arg1 localURL:(id)arg2;

@end

