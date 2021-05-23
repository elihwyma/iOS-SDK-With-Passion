/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <Foundation/NSObject.h>

@class LSApplicationProxy, NSString;

@interface PSThirdPartyApp : NSObject

{
    NSString *_localizedName;
    LSApplicationProxy *_proxy;
}

@property (nonatomic, readonly) LSApplicationProxy *proxy;

- (id)description;
- (void)load;
- (id)localizedName;
- (id)initWithApplicationProxy:(id)arg1;

@end
