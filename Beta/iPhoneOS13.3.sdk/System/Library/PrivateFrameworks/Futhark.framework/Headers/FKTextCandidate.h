/*
 Image: /System/Library/PrivateFrameworks/Futhark.framework/Futhark
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface FKTextCandidate : NSObject

{
    float _confidence;
    NSString *_text;
}

@property (copy, nonatomic, readonly) NSString *text;
@property (readonly) float confidence;

- (id)initWithText:(id)arg1 confidence:(float)arg2;

@end
