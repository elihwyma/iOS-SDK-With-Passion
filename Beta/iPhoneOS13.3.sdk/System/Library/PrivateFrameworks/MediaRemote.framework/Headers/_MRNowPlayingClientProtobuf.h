/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, _MRColorProtobuf;

@interface _MRNowPlayingClientProtobuf : PBCodable

{
    NSString *_bundleIdentifier;
    NSMutableArray *_bundleIdentifierHierarchys;
    NSString *_displayName;
    int _nowPlayingVisibility;
    NSString *_parentApplicationBundleIdentifier;
    int _processIdentifier;
    int _processUserIdentifier;
    _MRColorProtobuf *_tintColor;
    _Bool _isEmptyDeprecated;
    struct {
        unsigned int nowPlayingVisibility:1;
        unsigned int processIdentifier:1;
        unsigned int processUserIdentifier:1;
        unsigned int isEmptyDeprecated:1;
    } _has;
}

@property (nonatomic) _Bool hasProcessIdentifier;
@property (nonatomic) int processIdentifier;
@property (nonatomic, readonly) _Bool hasBundleIdentifier;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (nonatomic, readonly) _Bool hasParentApplicationBundleIdentifier;
@property (retain, nonatomic) NSString *parentApplicationBundleIdentifier;
@property (nonatomic) _Bool hasProcessUserIdentifier;
@property (nonatomic) int processUserIdentifier;
@property (nonatomic) _Bool hasNowPlayingVisibility;
@property (nonatomic) int nowPlayingVisibility;
@property (nonatomic, readonly) _Bool hasTintColor;
@property (retain, nonatomic) _MRColorProtobuf *tintColor;
@property (nonatomic, readonly) _Bool hasDisplayName;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSMutableArray *bundleIdentifierHierarchys;
@property (nonatomic) _Bool hasIsEmptyDeprecated;
@property (nonatomic) _Bool isEmptyDeprecated;

+ (Class)bundleIdentifierHierarchyType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addBundleIdentifierHierarchy:(id)arg1;
- (unsigned long long)bundleIdentifierHierarchysCount;
- (void)clearBundleIdentifierHierarchys;
- (id)bundleIdentifierHierarchyAtIndex:(unsigned long long)arg1;
- (id)nowPlayingVisibilityAsString:(int)arg1;
- (int)StringAsNowPlayingVisibility:(id)arg1;

@end
