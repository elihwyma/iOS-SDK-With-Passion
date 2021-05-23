/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSURL;

@interface IKSrcsetParser : NSObject

{
    NSArray *_srcsetRules;
}

@property (nonatomic, readonly) NSURL *resolvedURL;

- (id)initWithSrcsetStr:(id)arg1 defaultStr:(id)arg2;

@end
