/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface IKCSSSelector : NSObject

{
    long long _type;
    NSString *_name;
    struct _NSRange _range;
}

@property long long type;
@property (retain, nonatomic) NSString *name;
@property (nonatomic, readonly) NSString *stringValue;
@property (nonatomic) struct _NSRange range;

- (id)description;

@end
