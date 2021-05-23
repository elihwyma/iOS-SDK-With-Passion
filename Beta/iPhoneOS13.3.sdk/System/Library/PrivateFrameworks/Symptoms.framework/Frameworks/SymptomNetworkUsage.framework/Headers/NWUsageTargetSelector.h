/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomNetworkUsage.framework/SymptomNetworkUsage
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface NWUsageTargetSelector : NSObject

{
    _Bool _hasExplicitTCP;
    _Bool _explicitTCPValue;
    _Bool _hasExplicitUDP;
    _Bool _explicitUDPValue;
    _Bool _hasExplicitChannels;
    _Bool _explicitChannelsValue;
    _Bool _hasExplicitSockets;
    _Bool _explicitSocketsValue;
    _Bool _hasExplicitQUIC;
    _Bool _explicitQUICValue;
    NSDictionary *_suppliedParams;
    unsigned long long _filter;
    unsigned long long _events;
}

@property (retain) NSDictionary *suppliedParams;
@property unsigned long long filter;
@property unsigned long long events;

- (id)description;
- (id)initWithSelection:(id)arg1;
- (_Bool)applySelection:(id)arg1;
- (id)initWithMultipleSelections:(id)arg1;
- (_Bool)shouldAddProvider:(int)arg1;

@end
