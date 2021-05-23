/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface IKPlayerTimedMetadataEventUserInfo : NSObject

{
    NSString *_key;
    NSDictionary *_value;
}

@property (copy, nonatomic, readonly) NSString *key;
@property (copy, nonatomic, readonly) NSDictionary *value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSDictionary *properties;

- (id)initWithKey:(id)arg1 value:(id)arg2;

@end
