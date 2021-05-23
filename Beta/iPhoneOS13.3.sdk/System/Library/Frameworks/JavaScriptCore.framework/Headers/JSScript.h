/*
 Image: /System/Library/Frameworks/JavaScriptCore.framework/JavaScriptCore
 */

#import <Foundation/NSObject.h>

@interface JSScript : NSObject

{
    struct WeakObjCPtr<JSVirtualMachine> m_virtualMachine;
    long long m_type;
    struct MappedFileData m_mappedSource;
    struct String m_source;
    struct RetainPtr<NSURL> m_sourceURL;
    struct RetainPtr<NSURL> m_cachePath;
    RefPtr_cd332c91 m_cachedBytecode;
}

+ (id)scriptOfType:(long long)arg1 withSource:(id)arg2 andSourceURL:(id)arg3 andBytecodeCache:(id)arg4 inVirtualMachine:(id)arg5 error:(out id *)arg6;
+ (id)scriptOfType:(long long)arg1 memoryMappedFromASCIIFile:(id)arg2 withSourceURL:(id)arg3 andBytecodeCache:(id)arg4 inVirtualMachine:(id)arg5 error:(out id *)arg6;

- (id)init;
- (unsigned int)hash;
- (long long)type;
- (const struct String *)source;
- (id).cxx_construct;
- (id)sourceURL;
- (struct SourceCode)sourceCode;
- (void)readCache;
- (_Bool)writeCache:(struct String *)arg1;
- (_Bool)cacheBytecodeWithError:(id *)arg1;
- (_Bool)isUsingBytecodeCache;
- (RefPtr_cd332c91)cachedBytecode;
- (struct JSSourceCode *)jsSourceCode;

@end
