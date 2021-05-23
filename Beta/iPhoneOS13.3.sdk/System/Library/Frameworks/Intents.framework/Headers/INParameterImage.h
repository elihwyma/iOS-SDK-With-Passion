/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class INImage, INParameter;

@interface INParameterImage : NSObject <Swift>

{
    INParameter *_parameter;
    INImage *_image;
}

@property (copy, nonatomic, readonly) INParameter *parameter;
@property (copy, nonatomic, readonly) INImage *image;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithParameter:(id)arg1 image:(id)arg2;

@end
