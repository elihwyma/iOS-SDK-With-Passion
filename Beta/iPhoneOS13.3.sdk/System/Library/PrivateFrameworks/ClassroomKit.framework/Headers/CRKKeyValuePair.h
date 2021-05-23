/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@interface CRKKeyValuePair : NSObject

{
    id _key;
    id _value;
}

@property (nonatomic, readonly) id key;
@property (nonatomic, readonly) id value;

- (id)initWithKey:(id)arg1 value:(id)arg2;

@end
