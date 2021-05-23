/*
 Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

#import <Foundation/NSObject.h>

#import <ControlCenterUI/Swift-Protocol.h>

@class NSString;

@interface CCUIPPTTest : NSObject <Swift>

{
    NSString *_name;
    unsigned long long _beginSignpost;
    unsigned long long _endSignpost;
}

@property (copy, nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned long long beginSignpost;
@property (nonatomic, readonly) unsigned long long endSignpost;

+ (id)testWithName:(id)arg1 beginSignpost:(unsigned long long)arg2 endSignpost:(unsigned long long)arg3;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithName:(id)arg1 beginSignpost:(unsigned long long)arg2 endSignpost:(unsigned long long)arg3;

@end
