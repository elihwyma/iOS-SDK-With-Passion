/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SCNShadable;

@interface _SCNShadableCompilationIssue : NSObject

{
    id <SCNShadable> _shadable;
    NSString *_entryPoint;
    NSString *_effectiveModifier;
    NSString *_message;
    unsigned long long _type;
    long long _line;
}

@property (nonatomic, readonly) id <SCNShadable> shadable;
@property (nonatomic, readonly) NSString *entryPoint;
@property (nonatomic, readonly) NSString *effectiveModifier;
@property (nonatomic, readonly) NSString *message;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) long long line;

+ (id)issueWithShadable:(id)arg1 entryPoint:(id)arg2 effectiveModifier:(id)arg3 message:(id)arg4 line:(long long)arg5 type:(unsigned long long)arg6;

- (void)dealloc;

@end
