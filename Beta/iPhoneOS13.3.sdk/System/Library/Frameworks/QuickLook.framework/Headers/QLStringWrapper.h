/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <NSObject.h>

@class NSAttributedString, NSDictionary;

__attribute__((visibility("hidden")))
@interface QLStringWrapper : NSObject

{
    NSAttributedString *_string;
    NSDictionary *_attributes;
}

@property (retain) NSAttributedString *string;
@property (retain) NSDictionary *attributes;

@end
