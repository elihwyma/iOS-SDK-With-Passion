/*
 Image: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
 */

#import <Foundation/NSObject.h>

@interface OBDevice : NSObject

{
    _Bool _hasHomeButton;
    unsigned long long _type;
    unsigned long long _templateType;
}

@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long templateType;
@property (nonatomic) _Bool hasHomeButton;

+ (id)currentDevice;

- (unsigned long long)templateTypeForBoundsWidth:(double)arg1;

@end
