/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

__attribute__((visibility("hidden")))
@interface GEOComponentAction : PBCodable

{
    CDStruct_95bda58d _actions;
    int _component;
    _Bool _handleLocally;
    struct {
        unsigned int has_component:1;
        unsigned int has_handleLocally:1;
    } _flags;
}

@property (nonatomic) _Bool hasComponent;
@property (nonatomic) int component;
@property (nonatomic, readonly) unsigned long long actionsCount;
@property (nonatomic, readonly) int *actions;
@property (nonatomic) _Bool hasHandleLocally;
@property (nonatomic) _Bool handleLocally;

+ (_Bool)isValid:(id)arg1;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (int)actionsAtIndex:(unsigned long long)arg1;
- (void)clearActions;
- (void)addActions:(int)arg1;
- (id)componentAsString:(int)arg1;
- (int)StringAsComponent:(id)arg1;
- (void)setActions:(int *)arg1 count:(unsigned long long)arg2;
- (id)actionsAsString:(int)arg1;
- (int)StringAsActions:(id)arg1;

@end
