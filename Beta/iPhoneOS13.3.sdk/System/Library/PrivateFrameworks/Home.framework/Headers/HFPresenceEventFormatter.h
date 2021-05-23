/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSFormatter.h>

@class HMHome;

@interface HFPresenceEventFormatter : NSFormatter

{
    unsigned long long _nameType;
    unsigned long long _style;
    HMHome *_home;
}

@property (nonatomic) unsigned long long nameType;
@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) HMHome *home;

- (id)initWithHome:(id)arg1;
- (id)stringForPresenceEventBuilder:(id)arg1;
- (id)_formattedListForSelectedUsers:(id)arg1 inHome:(id)arg2;
- (id)stringForPresenceEvent:(id)arg1;

@end
