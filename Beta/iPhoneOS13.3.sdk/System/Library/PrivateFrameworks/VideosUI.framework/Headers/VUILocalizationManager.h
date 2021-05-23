/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface VUILocalizationManager : NSObject

{
    NSDictionary *_overideLocDict;
}

@property (retain) NSDictionary *overideLocDict;

+ (id)sharedInstance;

- (id)localizedStringForKey:(id)arg1;
- (id)localizedStringForKey:(id)arg1 withCounts:(id)arg2;
- (void)updateWithJSDictionary:(id)arg1;

@end
