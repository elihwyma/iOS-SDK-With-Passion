/*
 Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
 */

#import <NSObject.h>

@class NSString;

@interface TMLAspect : NSObject

{
    int _advice;
    NSObject *_target;
    NSString *_signalName;
    NSString *_registrationKey;
    CDUnknownBlockType _block;
    CDUnknownBlockType _unregisterBlock;
}

@property (weak, nonatomic) NSObject *target;
@property (nonatomic) int advice;
@property (copy, nonatomic) NSString *signalName;
@property (copy, nonatomic) CDUnknownBlockType block;
@property (copy, nonatomic) CDUnknownBlockType unregisterBlock;
@property (nonatomic, readonly) NSString *registrationKey;

+ (id)aspectForRegistrationKey:(id)arg1 signalOrMethodName:(id)arg2 advice:(int)arg3 block:(CDUnknownBlockType)arg4;
+ (CDUnknownBlockType)jsConvertedBlock:(id)arg1;
+ (id)aspectForTarget:(id)arg1 signalOrMethodName:(id)arg2 advice:(int)arg3 block:(CDUnknownBlockType)arg4;
+ (id)aspectForObjectsImplementingProtocolNamed:(id)arg1 signalOrMethodName:(id)arg2 advice:(int)arg3 block:(CDUnknownBlockType)arg4;
+ (id)aspectForObjectsWithClassNamed:(id)arg1 signalOrMethodName:(id)arg2 advice:(int)arg3 block:(CDUnknownBlockType)arg4;
+ (id)tmlAspectForObjectsImplementingProtocolNamed:(id)arg1 signalOrMethodName:(id)arg2 advice:(int)arg3;
+ (id)tmlAspectForObjectsWithClassNamed:(id)arg1 signalOrMethodName:(id)arg2 advice:(int)arg3;
+ (id)tmlAspectForTarget:(id)arg1 signalOrMethodName:(id)arg2 advice:(int)arg3;

- (void)dealloc;
- (void)unregister;
- (void)tmlDispose;
- (void)activateWithObject:(id)arg1 arguments:(id)arg2 returnValue:(id)arg3 newArguments:(id *)arg4 newReturnValue:(id *)arg5;

@end
