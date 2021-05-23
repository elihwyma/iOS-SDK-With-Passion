/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface IKAppPrototypeIdentifier : NSObject

{
    NSString *_identifier;
    NSString *_selector;
    NSDictionary *_groupingValues;
}

@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSString *selector;
@property (copy, nonatomic, readonly) NSDictionary *groupingValues;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1 selector:(id)arg2 groupingValues:(id)arg3;

@end
