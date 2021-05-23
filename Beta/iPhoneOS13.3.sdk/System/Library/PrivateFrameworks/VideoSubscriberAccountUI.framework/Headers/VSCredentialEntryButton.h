/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <Foundation/NSObject.h>

@class NSString, VSCredentialEntryViewModel;

__attribute__((visibility("hidden")))
@interface VSCredentialEntryButton : NSObject

{
    VSCredentialEntryViewModel *_owningViewModel;
    NSString *_title;
}

@property (weak, nonatomic) VSCredentialEntryViewModel *owningViewModel;
@property (copy, nonatomic) NSString *title;

@end
