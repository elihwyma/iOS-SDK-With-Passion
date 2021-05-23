/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@protocol HFIconDescriptor;

@interface HFTriggerUISummary : NSObject

{
    NSString *_triggerTitle;
    NSString *_triggerDescription;
    unsigned long long _triggerType;
    id <HFIconDescriptor> _triggerIconDescriptor;
    NSArray *_triggerSummaryIconDescriptors;
}

@property (nonatomic, readonly) NSString *triggerTitle;
@property (nonatomic, readonly) NSString *triggerDescription;
@property (nonatomic, readonly) unsigned long long triggerType;
@property (nonatomic, readonly) id <HFIconDescriptor> triggerIconDescriptor;
@property (nonatomic, readonly) NSArray *triggerSummaryIconDescriptors;

- (id)initWithTrigger:(id)arg1 inHome:(id)arg2 forceDisabled:(_Bool)arg3;
- (void)_updateWithTrigger:(id)arg1 inHome:(id)arg2 forceDisabled:(_Bool)arg3;

@end
