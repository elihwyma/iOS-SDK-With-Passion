/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MNTraceMiscInfo : NSObject

{
    NSString *_key;
    long long _intValue;
    double _doubleValue;
    NSString *_stringValue;
}

@property (copy, nonatomic) NSString *key;
@property (nonatomic) long long intValue;
@property (nonatomic) double doubleValue;
@property (copy, nonatomic) NSString *stringValue;

@end
