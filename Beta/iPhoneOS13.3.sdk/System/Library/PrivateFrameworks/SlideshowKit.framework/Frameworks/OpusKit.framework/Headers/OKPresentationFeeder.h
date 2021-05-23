/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKPresentationCanvas.h>

@class NSMutableDictionary, NSString;

@interface OKPresentationFeeder : OKPresentationCanvas

{
    NSString *_className;
    NSMutableDictionary *_internalSettings;
}

@property (copy, nonatomic) NSString *className;

+ (id)feederWithName:(id)arg1 className:(id)arg2 settings:(id)arg3;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionary;
- (void)resolveIfNeeded;
- (id)initWithDictionary:(id)arg1 andName:(id)arg2 forPresentation:(id)arg3;

@end
