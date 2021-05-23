/*
 Image: /System/Library/PrivateFrameworks/SiriUIActivation.framework/SiriUIActivation
 */

#import <Foundation/NSObject.h>

@class AFUISiriLanguage, NSDate, NSString;

@interface SASGuideMonitor : NSObject

{
    AFUISiriLanguage *_language;
    NSDate *_lastAppUpdateTimestamp;
    NSDate *_lastGuideCheck;
}

@property (nonatomic, readonly, getter=_language) AFUISiriLanguage *language;
@property (retain, nonatomic) NSDate *lastAppUpdateTimestamp;
@property (retain, nonatomic) NSDate *lastGuideCheck;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)monitor;

- (id)init;
- (void)siriLanguageSpokenLanguageCodeDidChange:(id)arg1;
- (void)_applicationsDidChange;
- (void)checkForGuideUpdatesIfNecessary;

@end
