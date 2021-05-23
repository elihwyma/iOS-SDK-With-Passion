/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CIFeature : NSObject

@property (retain, readonly) NSString *type;
@property (readonly) struct CGRect bounds;

- (id)init;

@end
