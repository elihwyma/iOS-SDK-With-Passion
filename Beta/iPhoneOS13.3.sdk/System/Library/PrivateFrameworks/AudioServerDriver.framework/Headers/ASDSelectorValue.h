/*
 Image: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface ASDSelectorValue : NSObject

{
    unsigned int _value;
    NSString *_name;
}

@property (nonatomic) unsigned int value;
@property (copy, nonatomic) NSString *name;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end
