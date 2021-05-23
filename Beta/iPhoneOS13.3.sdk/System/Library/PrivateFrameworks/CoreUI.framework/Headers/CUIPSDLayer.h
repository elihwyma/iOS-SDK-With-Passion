/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CUIPSDLayer : NSObject

{
    double _opacity;
    int _blendMode;
    NSString *_name;
}

@property (nonatomic) double opacity;
@property (nonatomic) int blendMode;
@property (retain, nonatomic) NSString *name;

- (id)init;
- (void)dealloc;

@end
