/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

#import <Silex/Swift-Protocol.h>

@class SXLayoutOptions;

@protocol SXConditionHints;

@interface SXDOMCacheKey : NSObject <Swift>

{
    SXLayoutOptions *_options;
    id <SXConditionHints> _hints;
}

@property (nonatomic, readonly) SXLayoutOptions *options;
@property (nonatomic, readonly) id <SXConditionHints> hints;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLayoutOptions:(id)arg1 hints:(id)arg2;

@end
