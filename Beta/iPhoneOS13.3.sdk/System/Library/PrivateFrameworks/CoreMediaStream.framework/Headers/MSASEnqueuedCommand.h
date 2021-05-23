/*
 Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <Foundation/NSObject.h>

#import <CoreMediaStream/Swift-Protocol.h>

@class NSDictionary, NSString;

@interface MSASEnqueuedCommand : NSObject <Swift>

{
    NSString *_command;
    NSDictionary *_variantParam;
    NSDictionary *_invariantParam;
}

@property (copy, nonatomic) NSString *command;
@property (retain, nonatomic) NSDictionary *variantParam;
@property (retain, nonatomic) NSDictionary *invariantParam;

+ (id)command;
+ (id)commandwithCommand:(id)arg1 variantParam:(id)arg2 invariantParam:(id)arg3;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCommand:(id)arg1 variantParam:(id)arg2 invariantParam:(id)arg3;
- (_Bool)canBeGroupedWithCommand:(id)arg1;

@end
