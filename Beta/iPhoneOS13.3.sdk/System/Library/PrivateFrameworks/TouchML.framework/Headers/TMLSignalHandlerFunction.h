/*
 Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
 */

#import <TouchML/TMLFunction.h>

@class NSString;

@interface TMLSignalHandlerFunction : TMLFunction

{
    NSString *_signalName;
}

@property (nonatomic, readonly) NSString *signalName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)decode:(const struct ProtobufCMessage *)arg1;

- (void)encode:(struct ProtobufCMessage *)arg1;
- (id)initWithSignalName:(id)arg1 functionName:(id)arg2 body:(id)arg3;

@end
