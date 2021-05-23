/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface AVCCaptionsToken : NSObject

{
    NSString *_text;
    double _confidence;
    _Bool _hasSpaceAfter;
}

@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) double confidence;
@property (nonatomic, readonly) _Bool hasSpaceAfter;

- (void)dealloc;
- (id)description;
- (id)initWithText:(id)arg1 confidence:(double)arg2 spaceAfter:(_Bool)arg3;

@end
