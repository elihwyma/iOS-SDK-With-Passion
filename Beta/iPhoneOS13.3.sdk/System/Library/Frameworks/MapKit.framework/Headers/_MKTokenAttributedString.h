/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class NSAttributedString, NSString;

__attribute__((visibility("hidden")))
@interface _MKTokenAttributedString : NSObject

{
    NSAttributedString *_attributedString;
    NSString *_string;
}

@property (copy, nonatomic) NSAttributedString *attributedString;
@property (copy, nonatomic) NSString *string;

- (id)description;
- (_Bool)isEmpty;

@end
