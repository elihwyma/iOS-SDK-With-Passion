/*
 Image: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
 */

#import <Foundation/NSObject.h>

@interface InvokeMakerInfo : NSObject

{
    SEL _selector;
    id _target;
}

@property (nonatomic) SEL selector;
@property (retain, nonatomic) id target;

- (id)initWithSel:(SEL)arg1 andTarget:(id)arg2;

@end
