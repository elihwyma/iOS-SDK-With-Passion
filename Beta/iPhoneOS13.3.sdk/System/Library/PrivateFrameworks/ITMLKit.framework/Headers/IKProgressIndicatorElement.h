/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKViewElement.h>

@class NSString;

@interface IKProgressIndicatorElement : IKViewElement

@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) unsigned long long percentage;

+ (_Bool)shouldParseChildDOMElements;

@end
