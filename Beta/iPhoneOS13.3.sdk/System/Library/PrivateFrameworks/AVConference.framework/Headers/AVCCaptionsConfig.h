/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSLocale;

@interface AVCCaptionsConfig : NSObject

{
    NSLocale *_locale;
}

@property (retain, nonatomic) NSLocale *locale;

- (void)dealloc;
- (id)description;

@end
