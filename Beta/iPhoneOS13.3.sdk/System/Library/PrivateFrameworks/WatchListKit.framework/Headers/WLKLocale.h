/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <Foundation/NSObject.h>

@class NSLocale, NSString;

@interface WLKLocale : NSObject

{
    NSString *_displayName;
    NSLocale *_locale;
}

@property (copy, nonatomic, readonly) NSString *displayName;
@property (copy, nonatomic, readonly) NSLocale *locale;

- (id)init;
- (id)initWithDictionary:(id)arg1;

@end
