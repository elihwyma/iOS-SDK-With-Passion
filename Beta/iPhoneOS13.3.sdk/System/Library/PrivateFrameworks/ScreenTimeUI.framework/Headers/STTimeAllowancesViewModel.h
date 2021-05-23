/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <Foundation/NSObject.h>

@class NSDictionary, STAlwaysAllowList, STDeviceBedtime;

__attribute__((visibility("hidden")))
@interface STTimeAllowancesViewModel : NSObject

{
    _Bool _allAllowancesEnabled;
    STDeviceBedtime *_bedtime;
    NSDictionary *_allowancesByIdentifier;
    STAlwaysAllowList *_alwaysAllowList;
    NSDictionary *_pendingAskForTimeByIdentifier;
}

@property (nonatomic) _Bool allAllowancesEnabled;
@property (copy, nonatomic) STDeviceBedtime *bedtime;
@property (copy, nonatomic) NSDictionary *allowancesByIdentifier;
@property (copy, nonatomic) STAlwaysAllowList *alwaysAllowList;
@property (copy, nonatomic) NSDictionary *pendingAskForTimeByIdentifier;

- (id)init;

@end
