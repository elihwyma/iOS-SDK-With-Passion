/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface IKCSSToken : NSObject

{
    unsigned short _charValue;
    long long _type;
    double _doubleValue;
    NSString *_stringValue;
    NSDictionary *_properties;
    struct _NSRange _range;
}

@property (nonatomic) long long type;
@property (nonatomic) unsigned short charValue;
@property (nonatomic) double doubleValue;
@property (retain, nonatomic) NSString *stringValue;
@property (nonatomic) struct _NSRange range;
@property (retain, nonatomic) NSDictionary *properties;

- (id)description;
- (id)initWithType:(long long)arg1;

@end
