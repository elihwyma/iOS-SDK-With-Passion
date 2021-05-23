/*
 Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
 */

#import <Foundation/NSObject.h>

@class ISColor, NSString;

__attribute__((visibility("hidden")))
@interface ISBorderEffect : NSObject

{
    ISColor *_color;
    double _lineWidth;
}

@property (retain) ISColor *color;
@property double lineWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)filterWithBackgroundImage:(id)arg1 inputImage:(id)arg2;
- (id)initWithLineWidth:(double)arg1 color:(id)arg2;

@end
