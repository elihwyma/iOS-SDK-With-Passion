/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class NSAttributedString, NSString;

__attribute__((visibility("hidden")))
@interface MKTransitInfoPreload : NSObject

{
    NSAttributedString *_attributedString;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSAttributedString *attributedString;

- (id)initWithAttributedString:(id)arg1;

@end
