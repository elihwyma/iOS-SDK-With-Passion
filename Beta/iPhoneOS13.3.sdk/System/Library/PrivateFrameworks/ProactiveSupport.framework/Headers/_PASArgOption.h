/*
 Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _PASArgOption : NSObject

{
    int _longOptionFlag;
    _Bool _required;
    NSString *_name;
    NSString *_shortName;
    NSString *_helpDescription;
    NSString *_argMetavar;
}

@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSString *shortName;
@property (copy, nonatomic, readonly) NSString *helpDescription;
@property (copy, nonatomic, readonly) NSString *argMetavar;
@property (nonatomic, readonly) _Bool required;

+ (id)optionWithName:(id)arg1 shortName:(id)arg2 help:(id)arg3;
+ (id)optionWithName:(id)arg1 shortName:(id)arg2 argMetavar:(id)arg3 help:(id)arg4;
+ (id)optionWithName:(id)arg1 shortName:(id)arg2 argMetavar:(id)arg3 help:(id)arg4 required:(_Bool)arg5;

- (id)description;
- (id)initWithName:(id)arg1 shortName:(id)arg2 argMetavar:(id)arg3 help:(id)arg4 required:(_Bool)arg5;

@end
