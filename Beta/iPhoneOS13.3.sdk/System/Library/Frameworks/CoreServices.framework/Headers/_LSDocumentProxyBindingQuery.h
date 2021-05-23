/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <CoreServices/_LSQuery.h>

@class LSDocumentProxy, NSString;

__attribute__((visibility("hidden")))
@interface _LSDocumentProxyBindingQuery : _LSQuery

{
    unsigned char _style;
    LSDocumentProxy *_documentProxy;
    NSString *_handlerRank;
}

@property (retain, nonatomic, readonly) LSDocumentProxy *documentProxy;
@property (nonatomic, readonly) unsigned char style;
@property (copy, nonatomic, readonly) NSString *handlerRank;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDocumentProxy:(id)arg1 style:(unsigned char)arg2 handlerRank:(id)arg3;
- (void)filterOpenRestrictedBindings:(vector_d012b617 *)arg1 connection:(id)arg2 context:(struct LSContext *)arg3 earlyYield:(CDUnknownBlockType)arg4;
- (void)_enumerateWithXPCConnection:(id)arg1 block:(CDUnknownBlockType)arg2;
- (_Bool)_requiresDatabaseMappingEntitlement;

@end
