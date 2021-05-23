/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class NSCache;

__attribute__((visibility("hidden")))
@interface MKWebContentBlocker : NSObject

{
    NSCache *_regularExpressionCache;
}

+ (id)sharedBlocker;

- (id)_regularExpression;
- (_Bool)shouldBlockLoadingOfURL:(id)arg1;

@end
