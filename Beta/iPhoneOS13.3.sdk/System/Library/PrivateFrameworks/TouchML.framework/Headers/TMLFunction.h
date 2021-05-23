/*
 Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
 */

#import <NSObject.h>

@class NSString;

@interface TMLFunction : NSObject

{
    NSString *_functionName;
    NSString *_functionBody;
}

@property (nonatomic, readonly) NSString *functionName;
@property (nonatomic, readonly) NSString *functionBody;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)decode:(const struct ProtobufCMessage *)arg1;

- (void)encode:(struct ProtobufCMessage *)arg1;
- (id)initWithName:(id)arg1 body:(id)arg2;

@end
