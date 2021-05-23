/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface VSCredentialEntryPicker : NSObject

{
    NSString *_title;
    NSArray *_pickerItems;
    long long _selectedIndex;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSArray *pickerItems;
@property (nonatomic) long long selectedIndex;

- (id)pickerItemAtCurrentIndex;

@end
