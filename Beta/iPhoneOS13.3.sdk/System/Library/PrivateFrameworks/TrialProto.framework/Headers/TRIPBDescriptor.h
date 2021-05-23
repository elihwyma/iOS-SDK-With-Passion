/*
 Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, TRIPBFileDescriptor;

@interface TRIPBDescriptor : NSObject

{
    NSArray *fields_;
    NSArray *oneofs_;
    unsigned int storageSize_;
    Class messageClass_;
    TRIPBFileDescriptor *file_;
    _Bool wireFormat_;
    unsigned int extensionRangesCount_;
    const struct TRIPBExtensionRange *extensionRanges_;
}

@property (copy, nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSArray *fields;
@property (nonatomic, readonly) NSArray *oneofs;
@property (nonatomic, readonly) const struct TRIPBExtensionRange *extensionRanges;
@property (nonatomic, readonly) unsigned int extensionRangesCount;
@property (nonatomic, readonly) TRIPBFileDescriptor *file;
@property (nonatomic, readonly, getter=isWireFormat) _Bool wireFormat;
@property (nonatomic, readonly) Class messageClass;
@property (readonly) TRIPBDescriptor *containingType;
@property (readonly) NSString *fullName;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setupExtraTextInfo:(const char *)arg1;
- (id)initWithClass:(Class)arg1 file:(id)arg2 fields:(id)arg3 storageSize:(unsigned int)arg4 wireFormat:(_Bool)arg5;
- (void)setupOneofs:(const char **)arg1 count:(unsigned int)arg2 firstHasIndex:(int)arg3;
- (void)setupExtensionRanges:(const struct TRIPBExtensionRange *)arg1 count:(int)arg2;
- (void)setupContainingMessageClassName:(const char *)arg1;
- (void)setupMessageClassNameSuffix:(id)arg1;
- (id)fieldWithNumber:(unsigned int)arg1;
- (id)fieldWithName:(id)arg1;
- (id)oneofWithName:(id)arg1;

@end
