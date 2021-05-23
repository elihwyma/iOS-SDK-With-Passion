/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _SFPerSitePreferencesSection : NSObject

{
    NSString *_title;
    NSArray *_preferences;
}

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSArray *preferences;

- (id)initWithTitle:(id)arg1 preferences:(id)arg2;

@end
