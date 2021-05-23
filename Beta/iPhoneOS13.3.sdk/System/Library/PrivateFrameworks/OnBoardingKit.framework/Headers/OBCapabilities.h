/*
 Image: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
 */

#import <Foundation/NSObject.h>

@interface OBCapabilities : NSObject

{
    _Bool _preventURLDataDetection;
    _Bool _preventOpeningSafari;
}

@property (nonatomic) _Bool preventURLDataDetection;
@property (nonatomic) _Bool preventOpeningSafari;

+ (id)sharedCapabilities;

- (_Bool)isWAPI;

@end
