/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <CloudDocsDaemon/Swift-Protocol.h>

@class NSMutableArray;

@interface BRFieldXattrBlob : PBCodable <Swift>

{
    NSMutableArray *_xattrs;
}

@property (retain, nonatomic) NSMutableArray *xattrs;

+ (id)loadXattrsFromFD:(int)arg1 withMaximumSize:(unsigned long long)arg2 error:(id *)arg3;
+ (_Bool)loadXattrsFromFD:(int)arg1 structuralBlob:(id *)arg2 contentBlob:(id *)arg3 localBlob:(id *)arg4 withMaximumSize:(unsigned long long)arg5 error:(id *)arg6;
+ (_Bool)removeXattrsOnFD:(int)arg1 includingContentRelated:(_Bool)arg2 error:(id *)arg3;
+ (Class)xattrsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)shortDescription;
- (_Bool)applyToFileDescriptor:(int)arg1 error:(id *)arg2;
- (void)addXattrs:(id)arg1;
- (unsigned long long)xattrsCount;
- (void)clearXattrs;
- (id)xattrsAtIndex:(unsigned long long)arg1;

@end
