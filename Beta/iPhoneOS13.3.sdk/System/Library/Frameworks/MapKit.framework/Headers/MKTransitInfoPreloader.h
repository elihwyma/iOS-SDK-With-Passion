/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface MKTransitInfoPreloader : NSObject

{
    NSArray *_transitLabels;
}

+ (id)separatorImageWithLineHeight:(double)arg1;
+ (id)attributedTextFromPreload:(id)arg1 view:(id)arg2;

- (id)initWithTransitLabels:(id)arg1;
- (void)preloadWithCompletion:(CDUnknownBlockType)arg1;

@end
