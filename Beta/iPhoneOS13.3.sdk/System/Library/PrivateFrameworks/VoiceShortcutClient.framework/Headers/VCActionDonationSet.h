/*
 Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface VCActionDonationSet : NSObject

{
    NSMutableArray *_predictedActions;
    NSMutableArray *_recentActions;
    NSMutableArray *_appSuggestedActions;
}

@property (nonatomic, readonly) NSMutableArray *predictedActions;
@property (nonatomic, readonly) NSMutableArray *recentActions;
@property (nonatomic, readonly) NSMutableArray *appSuggestedActions;

- (id)init;

@end
