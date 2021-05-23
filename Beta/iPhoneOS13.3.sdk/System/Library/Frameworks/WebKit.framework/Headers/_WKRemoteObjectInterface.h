/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSString, Protocol;

@interface _WKRemoteObjectInterface : NSObject

{
    struct RetainPtr<NSString> _identifier;
    struct HashMap<SEL *, MethodInfo, WTF::PtrHash<SEL *>, WTF::HashTraits<SEL *>, WTF::HashTraits<MethodInfo>> _methods;
    Protocol *_protocol;
}

@property (nonatomic, readonly) Protocol *protocol;
@property (nonatomic, readonly) NSString *identifier;

+ (id)remoteObjectInterfaceWithProtocol:(id)arg1;

- (id)debugDescription;
- (void)setClasses:(id)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned long long)arg3 ofReply:(_Bool)arg4;
- (id)_methodSignatureForReplyBlockOfSelector:(SEL)arg1;
- (id)classesForSelector:(SEL)arg1 argumentIndex:(unsigned long long)arg2 ofReply:(_Bool)arg3;
- (id).cxx_construct;
- (id)_methodSignatureForSelector:(SEL)arg1;
- (const Vector_e0e169c4 *)_allowedArgumentClassesForReplyBlockOfSelector:(SEL)arg1;
- (const Vector_e0e169c4 *)_allowedArgumentClassesForSelector:(SEL)arg1;
- (id)initWithProtocol:(id)arg1 identifier:(id)arg2;
- (id)classesForSelector:(SEL)arg1 argumentIndex:(unsigned long long)arg2;
- (void)setClasses:(id)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned long long)arg3;

@end
