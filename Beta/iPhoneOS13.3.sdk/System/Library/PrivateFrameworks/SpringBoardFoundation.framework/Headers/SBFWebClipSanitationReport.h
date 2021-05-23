/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <Foundation/NSObject.h>

@class NSError, UIWebClip;

@interface SBFWebClipSanitationReport : NSObject

{
    UIWebClip *_webClip;
    long long _result;
    NSError *_error;
}

@property (nonatomic, readonly) UIWebClip *webClip;
@property (nonatomic, readonly) long long result;
@property (copy, nonatomic, readonly) NSError *error;

- (id)description;
- (id)initWithWebClip:(id)arg1 result:(long long)arg2 error:(id)arg3;

@end
