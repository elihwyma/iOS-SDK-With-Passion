//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKConfigurationSource-Protocol.h>

@class NSString;
@protocol CRKConfigurationSource;

@interface CRKNotifyingConfigurationSource : NSObject <CRKConfigurationSource>
{
    id <CRKConfigurationSource> mBaseSource;
    NSString *mNotificationName;
}

// - (void).cxx_destruct;
- (void)setConfiguration:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)fetchConfiguration:(id /* CDUnknownBlockType */)arg1;
- (id)initWithConfigurationSource:(id)arg1 notificationName:(id)arg2;

@end

