/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <Foundation/NSObject.h>

@class NSString, PSUsageBundleApp;

@interface PSUsageBundleCategory : NSObject

{
    PSUsageBundleApp *_usageBundleApp;
    NSString *_identifier;
    NSString *_name;
}

@property (weak, nonatomic) PSUsageBundleApp *usageBundleApp;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *name;

+ (id)categoryNamed:(id)arg1 withIdentifier:(id)arg2 forUsageBundleApp:(id)arg3;

- (id)description;

@end
